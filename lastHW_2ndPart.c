//In this code, i've created simple tree and showed pre-order traversal

#include <stdio.h>
#include <stdlib.h>

//tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// traversal Function (Root Left Right)
void printPreorder(struct Node* node) {
    if (node == NULL) return;

    // 1. Visit the Root first
    printf("%d ", node->data);

    // 2. Then go to the Left 
    printPreorder(node->left);

    // 3. Finally go to the Right 
    printPreorder(node->right);
}

int main() {
    
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Pre-order Traversal result: ");
    printPreorder(root);


    return 0;
}