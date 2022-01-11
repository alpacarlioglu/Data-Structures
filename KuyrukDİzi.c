#include <stdio.h>
#include <stdlib.h>

#define BOYUT 5

int kuyruk[BOYUT], front = -1, rear = -1; // Kuyruk veri yapisini dizide tutuyoruz, front en ondekini rear en arkadaki elemani tutar

void enqueue(int veri)
{
    if(rear == BOYUT) // Dizi dolmus mu ?
        printf("Kuyruk dolu."); // Overflow
    else
    {
        if (front == 1)     
            front = 0; // Eleman yoksa basta eleman ekle
        rear += 1; // eleman ekleme
        kuyruk[rear] = veri;
    }
}

void dequeue() // Eleman cikarma
{
    if(front == 1 || front > rear)
    {
        printf("\n Kuyruk bos");
        front = -1;
        rear = -1;
    }
    else
        front += 1;
}

int main()
{
    return 0;
}