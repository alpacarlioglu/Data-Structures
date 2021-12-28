#include <stdio.h>
#include <stdlib.h>

//Dugum yapisi
struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *temp = NULL;

void SonaEkle(int veri)
{
    struct node *eklenecek = (struct node*)malloc(sizeof(struct node)); // Dugum olusturma
    eklenecek -> data = veri;
    eklenecek -> next = NULL;

    // Traverse islemi -----> Gezinme
    if(start == NULL)
    {
        start = eklenecek;
    }
    else
    {
        temp = start;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = eklenecek;
    }
}

void Yazdir()
{
    temp = start;
    while (temp -> next != NULL)
    {
        printf("%d => ", temp -> data);
        temp = temp -> next;
    }
    printf("%d", temp -> data);
}

int main()
{
    
}