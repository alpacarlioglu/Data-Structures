/* Bagli liste soyut bir veri saklama metodudur
Ozel tipte bir veri sakalma birimidir 
saklanan her veri, kendisinden sonra gelen veriyi isaret etmek zorundadir.
*/
#include <stdio.h>
#include <stdlib.h>

struct node // her bir dugumu tutan struct yapisi
{
    int data;
    struct node *next;
};

int main()
{
    struct node *firstNode = (struct node*)malloc(sizeof(struct node)); // Malloc komutuyla bellekte yer ayirip dugum olusturuyoruz
    struct node *secondNode = (struct node*)malloc(sizeof(struct node));

    firstNode -> data = 15;  // Dugume deger atiyoruz
    firstNode -> next = secondNode;

    secondNode -> data = 20;
    secondNode -> next = NULL;

    printf("%d => %d", firstNode -> data, secondNode -> data); 
}