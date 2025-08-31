#include <unistd.h>

char *ft_strcat(char *dest, char *src)
{
    while (*dest)
    {
        dest++;
    }
    while (*dest && *src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
    
}
int main()
{
    char dest[] = "hello";
    char src[] = " 1337";
    char *v = ft_strcat(dest, src);
    write(1, &v, 1);
}