#include <unistd.h>

void ft_puchar(char c)
{
    write(1, &c, 1);
}
void ft_putnum(int nb)
{
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if(nb  > 9)
    {
        ft_putnum(nb / 10);
    }
    ft_puchar(nb % 10 + '0');
    
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    while ( *s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}
int main()
{
    char s1[] = "hello";
    char s2[] = "hello";
    ft_putnum(ft_strncmp(s1, s2, 3));
}