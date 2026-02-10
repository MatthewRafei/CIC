#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node{
    char *string;
    struct Node *NIL;
    struct Node *node;
} Node;

void delete_n(){}

int find_n(){}

void insert_n(){}

void print_n(){}

char *generate_random_string(void)
{
    static int x = 1;
    srand(time(NULL) + x);
    x++;
    // constexpr int length = 4;
    int length = 4;
    // char dest[length + 1] = {0};
    char *dest = malloc(sizeof(char) * 5);
    char *start = dest;
    char charset[] = "0123456789"
                     "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		     
    while(length-- > 0){
	size_t index = (double) rand() / RAND_MAX * (sizeof(charset) - 1);
	*dest++ = charset[index];
    }
    *dest = '\0';
    return start;
}

int main(void)
{   
    // N1
    Node N1;
    Node N1_1;
    Node N1_2;
    Node N1_3;
    // N2
    Node N2;
    Node N2_1;
    Node N2_2;
    Node N2_3;
    // N3
    Node N3;
    Node N3_1;
    Node N3_2;
    Node N3_3;
    
    printf("%s\n", generate_random_string());
    printf("%s\n", generate_random_string());
    printf("%s\n", generate_random_string());
  
    return 0;
}
