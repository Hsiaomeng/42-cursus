void ft_swap(int *a, int *b)
{
    int temp;
   
    temp = *a;
    *a = *b;
    *b = temp;
}
/*
#include<stdio.h>
int main()
{
    int x = 9;
    int y = 8;

    ft_swap(&x, &y); 
    printf("%d, %d\n", x, y);

    return 0;
}
*/