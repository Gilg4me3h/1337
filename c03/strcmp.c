#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{

    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}

void ft_putnum(int nb)
{
    if(nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnum(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
    

}

int main()
{
    char s1[] = "heltlo";
    char s2[] = "hello";
    ft_putnum(ft_strcmp(s1, s2));
    return 0;
    
}