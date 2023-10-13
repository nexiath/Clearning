#include <stdio.h>
int main()
{
    int tab[] = {1, 2, 6, 3, 9, 4};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int max = tab[0];
    for (int i = 1; i < taille; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    printf("l'élément le plus grand est : %d\n", max);
    return 0;
}
