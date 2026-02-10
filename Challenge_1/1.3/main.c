#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char *string;
    struct Node *prev;
    struct Node *next;
} Node;

Node *node_constructor(char *string)
{
    Node *n = malloc(sizeof(Node));
    if (!n){ return NULL; }
    
    if(string){
	n->string = string;
    }
    else {
	n->string = NULL;
    }
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void delete_n(Node *n)
{
    Node *tmp1 = n->prev;
    Node *tmp2 = n->next;
    free(n);
    if(tmp1){
	tmp1->next = tmp2;
    }
    if(tmp2){
	tmp2->prev = tmp1;
    }
}

int find_n(Node *hd, char *string)
{
    int count = 0;
    if(!hd) {return -1;}
    if(!hd->string){ return -1; }
    while(string != hd->string){
	if(!hd->next){
	    return -1;
	}
	if(!hd->next->string) {return -1;}
	hd = hd->next;
    }
    return count;
}

void insert_n(Node *hd, char *string)
{
    Node *tmp = hd;
    while(tmp->next){
	tmp = tmp->next;
    }
    Node *n = node_constructor(string);
    tmp->next = n;
}

void print_n(Node *hd)
{
    int x = 0;
    while(hd){
	printf("Node [%d]: %s\n", x++, hd->string);
	hd = hd->next;
    }
    printf("\n");
}

void delete_node(Node *hd)
{
    Node *tmp = NULL;
    while(hd){
	free(hd->string);
	tmp = hd->next;
	free(hd);
	hd = tmp;
    }	
}

char *generate_string(void)
{
    static int x = 64;
    char *string = malloc(sizeof(char) * 6);
    if(!string) { return NULL; }
    if(!x){ return NULL; }
    x++;
    string[0] = 'h';
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = (char)x;
    string[5] = '\0';

    return string;
}

int main(void)
{
    Node *N1 = node_constructor(generate_string());
    Node *N2 = node_constructor(generate_string());
    Node *N3 = node_constructor(generate_string());
    N1->prev = NULL;
    N1->next = N2;
    N2->prev = N1;
    N2->next = N3;
    N3->prev = N2;
    N3->next = NULL;

    find_n(N1, "hello");

    print_n(N1);

    delete_n(N1);

    print_n(N2);
    
    delete_node(N2);
      
    return 0;
}
