# Temperature and Distance Converter in C

This is a simple converter implemented in C that allows converting values of temperature (Celsius ↔ Fahrenheit) and distance (Kilometers ↔ Miles). The application is interactive and runs via terminal.

## Features

- **Temperature Conversion**:
  - Celsius to Fahrenheit
  - Fahrenheit to Celsius
- **Distance Conversion**:
  - Kilometers to Miles
  - Miles to Kilometers
- **Interactive Interface**:
  The user can choose the desired category and input the value for conversion.

## Technologies Used

- Language: **C**
- Operating System: **Windows** (or Linux, with adjustments to the screen clear command)

## How to Use

1. Compile the code with a C compiler (e.g., GCC):
   ```bash
   gcc conversor.c -o conversor
2. Run the program:
    ```bash
    ./conversor
3. Follow the menu instructions to perform temperature or distance conversions.

## Limitations

- The screen-clearing function *`cls()`* uses *`system("cls")`*, which is only compatible with Windows.
- For Unix/Linux systems, replace it with *`system("clear")`*.

## Contribution

Feel free to contribute with improvements, such as:
- Support for more units
- Graphical user interface
- Saving conversion history