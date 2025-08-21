#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 33 && str[i] <= 126)
        {
            return (1);
        }
        i++;
    }
    return (0);
    
}
