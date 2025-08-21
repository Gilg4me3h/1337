#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while(i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    while(dest[i] < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

/*int main()
{
    unsigned int n = 5;
    char src[] = "hello world";
    char dest[n];
    printf("%s", ft_strncpy(dest, src, n));
}*/