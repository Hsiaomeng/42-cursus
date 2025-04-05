int ft_iterative_factorial(int nb)
{
    int result;
    
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    
    result = 1;
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
    return (result);
}

#include<stdio.h>
int main()
{
    printf("%d\n", ft_iterative_factorial(4));
    return (0);
}