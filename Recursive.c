#include <stdio.h>
#include <stdlib.h>

int Faktoriyel(int sayi)
{   
    if (sayi == 0) 
        return 1;
    return sayi * Faktoriyel(sayi -1); // 0 Olana kadar surekli kendini cagiriyor
}

int main()
{ 
    while (1)
    {
        int input;
        printf("Sayi giriniz\n");
        scanf("%d", &input);
        int fakt = Faktoriyel(input);
        printf("%d\n", fakt);        
    }
}