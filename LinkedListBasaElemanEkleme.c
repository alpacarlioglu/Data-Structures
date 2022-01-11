/*
-Ekleme olmadan onckei start elemani ikinci eleman olacaktir.
-Eklenecek olan eleman icin dugum olusturulur.
-Yeni dugumun next degeri start elemanına atanır.
-Yeni dugum start elemanı olarak guncellenir.
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *temp = NULL;

void basaEkle(int basa)
{
    struct node *basaGelecek = (struct node*)malloc(sizeof(struct node));

    basaGelecek -> data = basa;
    basaGelecek -> next = start;
    start = basaGelecek;
}

int main()
{
    return 0;
}