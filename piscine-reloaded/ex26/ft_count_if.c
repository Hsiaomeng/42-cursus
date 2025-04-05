#include <stdio.h>

int is_even_length(char *str)
{
    int len = 0;
    
    while (str[len])
        len++;
    
    return (len % 2 == 0) ? 1 : 0;
}

int starts_with_a(char *str)
{
    return (str[0] == 'a' || str[0] == 'A') ? 1 : 0;
}

int main(void)
{
    char *strings[] = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape", NULL};
    
    int even_count = ft_count_if(strings, &is_even_length);
    int a_count = ft_count_if(strings, &starts_with_a);
    
    printf("Number of strings with even length: %d\n", even_count);
    printf("Number of strings starting with 'a' or 'A': %d\n", a_count);
    
    return 0;
}


