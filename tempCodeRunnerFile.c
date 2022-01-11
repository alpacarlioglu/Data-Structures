#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{   
    if (sayi == 0) 
        return 1;
    return sayi * Faktoriel(sayi -1); // 0 Olana kadar surekli kendini cagiriyor
}

int main()
{ 
    int input;
    printf("Sayi giriniz\n");
    scanf("%d", &input);
    int fakt = faktoriyel(input);
}