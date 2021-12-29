#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next, *prev;

};

struct node *start, *temp = NULL;

struct node * DugumOlustur(int veri) // Dugum olusturma fonksiyonu
{
    struct node *yeniDugum = (struct node*)malloc(sizeof(struct node));
    yeniDugum -> data = veri;
    yeniDugum -> next = NULL;
    yeniDugum -> prev = NULL;
    return yeniDugum;
}

void SonaEkle(int veri)
{
    struct node *sonaEklenecek = DugumOlustur(veri);
    if (start = NULL)
        start = sonaEklenecek;
    else
    {
        //Traverse
        temp = start;
        while(temp -> next != NULL)
            temp = temp -> next;
        sonaEklenecek -> prev = temp;
        temp -> next = sonaEklenecek;
    }
}

void Yazdir()
{
    temp = start;
    
    while(temp != NULL)
    {
        printf("%d", temp -> data);
        temp = temp -> next;
    }
}

void BasaEkle(int veri)
{
    struct node * basaEklenecek = DugumOlustur(veri);
    if (start == NULL)
    {
        start = basaEklenecek;
        return;
    }
    start -> prev = basaEklenecek;
    basaEklenecek -> next = start;
    start = basaEklenecek;
}

void ArayaEkle(int kiminOnune, int eklenecek)
{
    temp = start;
    struct node *arayaEklenecek = DugumOlustur(eklenecek);
    struct node *onceki = NULL;

    if(start == NULL)
        start = arayaEklenecek;
    else if(start -> data == kiminOnune)
            BasaEkle(eklenecek);
    else
    {
        while (temp -> next != NULL)
        {
            if (temp -> data == kiminOnune)
            {
                onceki = temp -> prev;
                break;
            }
            temp = temp -> next;
        }
        temp -> prev = arayaEklenecek;
        arayaEklenecek -> next = temp;
        arayaEklenecek -> prev = onceki;
        onceki -> next = arayaEklenecek;
    }
}

void BastanSil()
{
    if (start == NULL)
    {
        printf("Liste zaten bos \n");
        return;
    }
    if(start -> next  == NULL)
    {
        free(start);
        start = NULL;
        return;
    }
    struct node *ikinci = start -> next;
    free(start);
    ikinci -> prev = NULL;
    start = ikinci;
} 

void SondanSil()
{
    if (start -> next == NULL)
    {
        BastanSil();
        return;
    }
    
    struct node *temp = start;

    while (temp -> next != NULL)
        temp = temp -> next;
    struct node *onceki = temp -> prev;
    free(temp);
    onceki -> next = NULL;
}

void AradanSil(int silenecek)
{
    // Traverse
    temp = start;
    while (temp -> next != NULL)
    {
        if (temp -> data == silenecek)
            break;
        temp = temp -> next;
    }
    struct node *sonraki = temp -> next;
    struct node *onceki = temp -> prev;
    free(temp);
    onceki -> next = sonraki;
    sonraki -> prev = onceki;
    
}

int main()
{   
    int input, sayi, sayi1;

    while (1)
    {
        printf("1- Sona eleman ekleme \n");
        printf("2- Basa eleman ekleme \n");
        printf("3- Araya eleman ekleme \n");
        printf("4- Bastan eleman sil \n");
        printf("5- Sondan eleman sil \n");
        printf("6- Aradan eleman sil \n");


        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("Sona eklemek istediginiz elemani girin ...\n");
            scanf("%d", &sayi);
            SonaEkle(sayi);
            Yazdir();
            break;
        case 2:
            printf("Basa eklemek istediginiz elemani girin ...\n");
            scanf("%d", &sayi);
            SonaEkle(sayi);
            Yazdir();
            break;
        case 3:
            printf("Araya eklemek istediginiz elemani girin ...\n");
            scanf("%d", &sayi);
            ArayaEkle(sayi1, sayi);
            Yazdir();
            break;
        case 4:
            BastanSil();
            Yazdir();
            break;
        case 5:
            SondanSil();
            yazdir();
            break;
        case 6:
            printf("Silinmesini istedigin elemani gir\n");
            scanf("%d", &sayi);
            AradanSil(sayi);
            Yazdir();
            break;
        default:
            break;
        }
    }
}