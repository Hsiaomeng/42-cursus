#include <stdio.h>

void print_int(int n)
{
    printf("%d ", n);
}

void double_int(int n)
{
    printf("%d ", n * 2);
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("Original array: ");
    ft_foreach(arr, 5, &print_int);
    printf("\n");
    
    printf("Doubled values: ");
    ft_foreach(arr, 5, &double_int);
    printf("\n");
    
    return 0;
}

