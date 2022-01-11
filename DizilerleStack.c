/*
-Soyut veri tipi
-Belli mantikla veri saklar
-Lifo (Last in First Out)
-Ister dizi ister linked listlerle olusturulabilir
*/
#include <stdlib.h>
#include <stdio.h>

#define BOYUT 5 
int dizi [BOYUT], top; // Stack yapimizi dizide tutmak icin dizi olusturuyoruz, Top degeri program basladiginda daima -1 atanacak

void push(int data) 
{
    if(top + 1 == BOYUT) // Stack veri yapimiz dolu mu diye kontrol yapiyoruz
        printf("Stack dolu.");
    else
    {
        top += 1;
        dizi[top] = data;  // Stacke eleman ekleme
    }
}

void pop()
{
    if(top == -1)
        printf("Stack zaten dolu.");
    else
        top -= 1; // Stackten eleman cikarma
}

int peek()
{
    return dizi[top]; // Stackten deger dondurur (En ustteki degeri)
}

int main()
{
    top = -1;
}