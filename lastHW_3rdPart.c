#include <stdio.h>
#include <stdlib.h>


struct Node {
    char data;
    struct Node *left, *right;
};

int main() {
    // creating nodes
    struct Node *n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n5 = (struct Node*)malloc(sizeof(struct Node));

    // implementing data of (a + b * c)
    n1->data = '+'; // root
    n2->data = 'a';
    n3->data = '*';
    n4->data = 'b';
    n5->data = 'c';

    // creating tree structure
    n1->left = n2;    // + 'nın solu: a
    n1->right = n3;   // + 'nın sağı: *
    
    n3->left = n4;    // * 'ın solu: b
    n3->right = n5;   // * 'ın sağı: c

    // we're showing nodes on bottom are empty at all
    n2->left = n2->right = NULL;
    n4->left = n4->right = NULL;
    n5->left = n5->right = NULL;

    //testing
    printf("Root: %c\n", n1->data);
    printf("Left of root: %c\n", n1->left->data);
    printf("Right of root: %c\n", n1->right->data);

    return 0;
}