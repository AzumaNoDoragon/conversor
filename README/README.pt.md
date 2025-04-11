# Conversor de Temperatura e Distância em C

Este é um conversor simples implementado em C, que permite converter valores de temperatura (Celsius ↔ Fahrenheit) e distância (Quilômetros ↔ Milhas). A aplicação é interativa e funciona via terminal.

## Funcionalidades

- **Converter temperatura**:
  - Celsius para Fahrenheit
  - Fahrenheit para Celsius
- **Converter distância**:
  - Quilômetros para Milhas
  - Milhas para Quilômetros
- **Interface interativa**:
  O usuário pode escolher a categoria desejada e digitar o valor para conversão.

## Tecnologias Utilizadas

- Linguagem: **C**
- Sistema Operacional: **Windows** (ou Linux, com ajuste no comando de limpeza de tela)

## Como Usar

1. Compile o código com um compilador C (por exemplo, GCC):
   ```bash
   gcc conversor.c -o conversor
2. Execute o programa:
    ```bash
    ./conversor
3. Siga as instruções no menu para realizar conversões de temperatura ou distância.

## Limitações

- A função de limpeza de tela *`(cls())`* utiliza *`system("cls")`*, compatível apenas com Windows.
- Para sistemas Unix/Linux, substitua por *`system("clear")`*.

## Contribuição

Sinta-se à vontade para contribuir com melhorias, como:
- Suporte a mais unidades de medida
- Interface gráfica
- Salvamento de histórico de conversões