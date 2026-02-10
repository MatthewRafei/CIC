#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node{
    char *string;
    struct Node *next_list_node;
    struct Node *next_node;
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
    int length = 4;
    char *dest = malloc(sizeof(char) * 5);
    char *start = dest;
    char charset[] = {"0123456789"
                     "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
		    

		     while(length-- > 0){
			 size_t index = (double) rand() / RAND_MAX * (sizeof(charset) - 1);
			 *dest++ = charset[index];
		     }
		     *dest = '\0';
		     return start;
}

int main(void)
{
    Node *N1 = malloc(sizeof(Node));
    Node *N2;
    Node *N3;
    Node HD;
    HD.string = "HD";
    HD.next_list_node = N1;
    HD.next_node = NULL;
    //HD.next_list_node -> next_node = N2;
    
    printf("%s\n", generate_random_string());
    printf("%s\n", generate_random_string());
    printf("%s\n", generate_random_string());
  
    return 0;
}
