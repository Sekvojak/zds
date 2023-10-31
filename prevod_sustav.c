#include <stdio.h>
# include <string.h>

int main()
{
    int cislo_dec = 0;
    int zaklad_sustavy = 0;
    char sum[100];
    int i = 0;

    scanf("%d", &cislo_dec);
    scanf("%d", &zaklad_sustavy);

    while (cislo_dec > 0)
    {   
        int zvysok = cislo_dec % zaklad_sustavy;
        if (zaklad_sustavy != 16)
        {
            sum[i] = '0' + zvysok;
            i++;
        }
        else
        {
            if (zvysok >= 10)
            {
                sum[i] = 'A' + zvysok - 10;
                i++;
            }
            else
            {
                sum[i] = '0' + zvysok;
                i++;
            }
        }
        cislo_dec = cislo_dec / zaklad_sustavy;
    }
    sum[i] = '\0';

    char result[100];
    int lenght = 0;
    lenght = strlen(sum);
    int c = 1;
    for (int x = 0; x < lenght; x++)
    {
        result[x] = sum[lenght-c];
        c++;
    }

    printf("Vysledok: %s\n", result);

    return 0;
}