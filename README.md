![illustration](img/printf.jpeg?raw=true)

# 42_ft_printf
Coding project for the Ecole 42 cursus which consists in recoding a simpler version of printf in C language

This `printf` supports the following format specifiers:

- **%c** : Prints a single character.
- **%s** : Prints a string (as defined by the common C convention).
- **%p** : The `void *` pointer argument is printed in hexadecimal format.
- **%d** : Prints a decimal (base 10) number.
- **%i** : Prints an integer in base 10.
- **%u** : Prints an unsigned decimal (base 10) number.
- **%x** : Prints a number in hexadecimal (base 16) with lowercase characters.
- **%X** : Prints a number in hexadecimal (base 16) with uppercase characters.
- **%%** : Prints a percent sign.

## Usage

To use this custom `printf` function, include the header file and link the appropriate source files in your project.

```c
#include "custom_printf.h"

int main() {
    custom_printf("Hello %s!\n", "world");
    return 0;
}