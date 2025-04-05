void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
/*
#include<stdio.h>
int main()
{
    int a = 10;
    int b = 4;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("%d, %d, %d, %d\n", a, b, div, mod);
    return (0);
}*/