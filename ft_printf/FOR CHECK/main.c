#include "ft_printf.h"
#include <limits.h> // 用于 INT_MAX / INT_MIN / UINT_MAX

int main(void)
{
    ft_printf("===== FT_PRINTF TEST =====\n\n");

    ft_printf("String: %s\n", "Hello 42");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Integer: %i\n", -42);
    ft_printf("Unsigned: %u\n", 3000000000U);
    ft_printf("Hex lowercase: %x\n", 255);
    ft_printf("Hex uppercase: %X\n", 255);
    ft_printf("Pointer: %p\n", (void *)0x12345678);
    ft_printf("Percent: %%\n\n");
    ft_printf("NULL string: %s\n", (char *)NULL);
    ft_printf("Zero decimal: %d\n", 0);
    ft_printf("Negative decimal: %d\n", -12345);
    ft_printf("INT_MAX: %d\n", INT_MAX);
    ft_printf("INT_MIN: %d\n", INT_MIN);
    ft_printf("UINT_MAX: %u\n", UINT_MAX);
    ft_printf("Pointer NULL: %p\n", NULL);
    ft_printf("Hex zero: %x\n", 0);
    ft_printf("Unsigned zero: %u\n", 0);
    ft_printf("Char zero (non-printable): %c\n", '\0');

    return 0;
}
