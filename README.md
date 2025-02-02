# Temporizador Periódico - Semáforo com Raspberry Pi Pico W

Este projeto implementa um semáforo utilizando um Raspberry Pi Pico W, três LEDs e resistores de 330 Ω. O sistema é controlado por um temporizador periódico que alterna os estados do semáforo a cada 3 segundos.

### Componentes Utilizados

- **Microcontrolador**: Raspberry Pi Pico W
- **LEDs**: 03 LEDs de cores diferentes
- **Resistores**: 03 resistores de 330 Ω

### Requisitos do Projeto

1. **Inicialização**: O semáforo deve iniciar com o LED vermelho aceso.
2. **Temporização**: O temporizador deve ser ajustado para um atraso de 3 segundos (3.000 ms) entre cada mudança de estado.
3. **Call-back do Temporizador**: A mudança de estado dos LEDs deve ser implementada na função de call-back do temporizador (`repeating_timer_callback()`).
4. **Saída Serial**: A rotina principal deve imprimir uma mensagem a cada segundo (1.000 ms) pela porta serial.
5. **Experimento com LED RGB**: Utilizar a ferramenta BitDogLab para experimentar com o LED RGB (GPIOs 11, 12 e 13).


## Como Compilar e Executar
1. **Pré-requisitos**:
   - Ter o ambiente de desenvolvimento para o Raspberry Pi Pico configurado (compilador, SDK, etc.).
   - CMake instalado.

2. **Compilação**:
   - Clone o repositório ou baixe os arquivos do projeto.
   - Navegue até a pasta do projeto e crie uma pasta de build:
     ```bash
     mkdir build
     cd build
     ```
   - Execute o CMake para configurar o projeto:
     ```bash
     cmake ..
     ```
   - Compile o projeto:
     ```bash
     make
     ```

3. **Upload para a placa**:
   - Conecte o Raspberry Pi Pico ao computador.
   - Copie o arquivo `.uf2` gerado para a placa.

## Simulação no Wokwi
Para visualizar a simulação do projeto no Wokwi:
1. Instale e configure o simulador wokwi seguindo as instruções encontradas no link:
[Introdução ao Wokwi para VS Code](https://docs.wokwi.com/pt-BR/vscode/getting-started)
2. Abra o arquivo diagram.json no vsCode.
3. Clique em "start simulation". 