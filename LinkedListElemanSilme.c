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

void BastanSil()
{
    struct node *ikinci = (struct node*)malloc(sizeof(struct node)); 
    ikinci = start -> next; // ikinciye birinci degeri atadiktan sonra ve birinciyi free komutuyla bosalttiktan sonra ikinci deger birinci deger olur.
    free(start);
    start = ikinci;
}

void AradanSil(int x) // Silinecek dugumden onceki dugum bulunur ve onceki dugum sonraki dugumu gosterir
{
    if(start -> data == x)
        BastanSil();
    struct node *onceki = NULL;
    struct node *sonraki = NULL;

    q = start;
    while (q -> next -> data != x)
    {
        q = q -> next;
    }
    if(q -> next == NULL)
        SondanSil();
    onceki = q;
    sonraki = q -> next -> next;
    free(q -> next);
    onceki -> next = sonraki;
}

SondanSil()
{
    if (start != NULL)
    {
        q = start;
        while (q -> next -> next != NULL) // Traverse islemi yapilarak sonda bir onceki eleman bulunur
        {
            q = q -> next;
        }
        free(q -> next); // aSondaki dugum bosaltilir
        q -> next = NULL;
    }
}
