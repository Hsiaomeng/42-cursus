#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
/*
#include <stdio.h>
int main()
{
    printf("%d\n", ft_putstr("abcdsfg"));
    return 0;
}*/