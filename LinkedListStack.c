#include <stdlib.h>
#include <stdio.h>

struct node // Dugum yapisi
{
    int data;
    struct node *next;
};

struct node *top = NULL; // bastaki elemani tutacak dugum

void Push(int veri) // Kendisine gonderilen parametreyi ekleyecek fonksiyon
{
    struct node *eklenecek = (struct node*)malloc(sizeof(struct node)); 
    eklenecek -> data = veri;
    eklenecek -> next = NULL;

    if (top != NULL)
        eklenecek -> next = top;
    top = eklenecek;
}

void Pop()
{
    if(top -> data == NULL) // Stack bos mu konrol ediyor
        printf("Stack zaten bos.");
    else
    {   
        struct node *temp; 
        temp = top;
        top = top -> next;
        free(temp);
    }
}

int Peek()
{
    return top -> data;
}

int main()
{
    return 0;
}