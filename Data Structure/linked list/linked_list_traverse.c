#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;  
};

int main(){
    // varriable declire
    struct Node *a = NULL;  
    struct Node *b = NULL;
    struct Node *c = NULL;

    // memory allocate
    a = (struct Node*)malloc(sizeof(struct Node));   
    b = (struct Node*)malloc(sizeof(struct Node));  
    c = (struct Node*)malloc(sizeof(struct Node)); 
    
    // value assign
    a->data = 10;  
    b->data = 20;
    c->data = 30;

    // connect list
    a->next = b;
    b->next = c;
    c->next = NULL;

    // traverse linked list
    while(a != NULL){
        printf("%d -> ", a->data);
        a = a->next;
    }

    return 0;
}