#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left, *right; // Sag ve sol cocugu isaret eden pointerlar
};

struct node *root = NULL; // Kok olusturuldu

struct node *newNode(int key) // Parametre gonderildiginde dugum olusturulcak
{
    struct node *temp = (struct node*)malloc(sizeof(struct node)); // Yeni eklenen dugumu ifade edecek
    temp -> data = key;
    temp -> right = NULL; // Ilk eklenenin sagi ve solu bos olur
    temp -> left = NULL;

    if (root == NULL)
        root = temp;
    return temp;
};

void inOrder(struct node *root)
{
    if(root != NULL)
    {
        inOrder(root -> left); // Recursive
        printf("%d ", root -> data);
        inOrder(root -> right);
    }
}

struct node *ekle(struct node *node, int key) 
{
    if(node == NULL) // Eklecek olan bos olmali
        return newNode(key);
    if(key < node -> data)   // Yerlestirme icin karsilastirma yapiliyor
        node -> left = ekle(node -> left, key);
    else if(key > node -> data)
        node -> right = ekle(node -> right, key);
    return node;
};

struct node *search(int aranan)
{
    struct node *current;
    current = root;

    while (current -> data != aranan)
    {
        if(current != NULL)
        {
            printf("%d", current -> data);
            if (aranan < current -> data)
                current = current -> left;
            else
                current = current ->right;
        }
        if(current == NULL)
        {   printf("Aradiginiz sayi aracta yok");   
            return NULL;
        }     
    }
    printf("%d", current -> data);
    return current;
};

int main()
{
    int input;

    while(1 == 1)
    {
        printf("\n1- Sayi ekle\n");
        printf("2- Inorder traversal...\n");
        printf("3- Arama yap\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("Girmek istediginiz sayi ?\n");
            scanf("%d", &input);
            if (root == NULL)
                root = ekle(root, input);
            ekle(root, input);
            break;
        case 2:
            inOrder(root);
            break;
        case 3:
            printf("Hangi sayiyi aramak istiyorsunuz ?\n");
            scanf("%d ", &input);
            search(input);
            break; 
        default:
            break;
        }
    }
    return 0;
}