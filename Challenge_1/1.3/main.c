#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char *string;
    struct Node *node;
} Node;

typedef struct Ll{
    Node *hd;
    Node *tl;
} Ll;

typedef struct DLl_n{
    Ll *linklistnode;
    Ll *next;
} DLl_n;

typedef struct DLl{
    Ll *hd;
    Ll *tl;
} DLl;

void delete_n(){}

int find_n(){}

void insert_n(){}

int main(void)
{
    DLl DoubleLinkedList;
    //DoubleLinkedList
    
    
    return 0;
}
