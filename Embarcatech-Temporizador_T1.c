#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define led_r 13
#define led_g 11
#define led_b 12

const uint8_t pins[] = {led_r, led_b, led_g};
uint8_t counter = 0;

int leds_states[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
};

void init_leds()
{
    gpio_init(led_r);
    gpio_set_dir(led_r, GPIO_OUT);

    gpio_init(led_g);
    gpio_set_dir(led_g, GPIO_OUT);
    
    gpio_init(led_b);
    gpio_set_dir(led_b, GPIO_OUT);
}

void turn_leds_on()
{
    for (int i = 0; i < 3; i++)
        gpio_put(pins[i], leds_states[counter][i]);
}

bool repeating_timer_callback(struct repeating_timer *t)
{

    turn_leds_on();
    printf("\nPassou 3 segundos\n");
    
    counter = ++counter > 2 ? 0 : counter;
    return true;
}

int main()
{
    stdio_init_all();
    init_leds();

    struct repeating_timer timer;

    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (true) {
        sleep_ms(1000);
        printf("Passou 1 segundo\n");
    }
}
