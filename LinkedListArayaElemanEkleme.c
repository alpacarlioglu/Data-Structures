/*
-Hangi dugumun onune ya da arkasina gelecegi belirtilmelidir.
-Bu sarta bagli olarak traverse islemi yapilir
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
struct node *q = NULL;

void DugumOlustur(int dugum)
{
    struct node *dugum = (struct node*)malloc(sizeof(struct node));
}

void arayaEkle(int x, int y)
{
    struct node *arayaEklenecek = (struct node*)malloc(sizeof(struct node));
    arayaEklenecek -> data  = y;
    q = start;
    while (q -> next -> data != x)
    {
        q = q-> next; // Bu dongu ile bir onceki eleman bulunur
    }
    int *onune;
    DugumOlustur(onune);
    onune = q -> next;
    q -> next = arayaEklenecek;
    arayaEklenecek -> next = onune;
}

int main()
{
    return 0;
}