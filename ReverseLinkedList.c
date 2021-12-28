// Mantik tum pointerlarin yonunu ters cevirmektir
// Ilk eleman son, son eleman ilk olur.

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
struct node *prev = NULL;
void TersCevir()
{
    q = start;

    while (q != NULL)
    {
        temp = q -> next;
        q -> next = prev;
        prev = q;
        q = temp;
    }
    
}