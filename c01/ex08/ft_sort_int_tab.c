#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while(i < size )
    {
        j = i + 1;
        while(j < size)
        {

            int tmp;
            if(tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;

            }
            j++;
        }
        i++;
    }

}

int main()
{
    int arr[] = {4, 3, 2, 1, 5};
    ft_sort_int_tab(arr, 5);
    printf("%d",arr[3]);
    return 0;
}