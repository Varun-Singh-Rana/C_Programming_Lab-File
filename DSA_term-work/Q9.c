//Write c program to create a binary search tree and then write ‘C’ function for following operations
//            i) Count total no. of nodes.
//           ii) Count total no. of  leaf nodes.
//          iii) Count total no. of nodes  having left child only.
//           iv) Count  nodes which are  in the left side of the root node.
//            v) Display node having maximum data.

#include<stdio.h>
#include<stdlib.h>
typedef struct Binarysearchtree {
    struct Binarysearchtree* left;
    int data;
    struct Binarysearchtree* right;
} bst;


bst* insert(bst*, int);
void preorder(bst*);
void inorder(bst*);
void postorder(bst*);
void count(bst*, int*);
void binarycountleaf(bst*, int*);
void countleftchild(bst*, int*);
void countleftroot(bst*, int*);
void max(bst*);


int main() {
    bst* root = NULL;
    int ch, data, c = 0;

    do {
        printf("\nBinary Search Tree Menu:\n");
        printf("1. Insert\n");
        printf("2. Preorder\n");
        printf("3. Inorder\n");
        printf("4. Postorder\n");
        printf("5. Count total number of nodes\n");
        printf("6. Count total number of nodes leaf\n");
        printf("7. Count total number of nodes left only child\n");
        printf("8. Count total number of nodes left only of root\n");
        printf("9. Max data node\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Preorder traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 3:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 5:
                count(root, &c);
                printf("Total number of nodes: %d\n", c);
                break;
            case 6:
                c = 0; 
                binarycountleaf(root, &c);
                printf("Total number of leaf nodes: %d\n", c);
                break;
            case 7:
                c = 0; 
                countleftchild(root, &c);
                printf("Total number of nodes having left child only: %d\n", c);
                break;
            case 8:
                c = 0; 
                countleftroot(root, &c);
                printf("Total number of nodes in the left side of the root node: %d\n", c);
                break;
            case 9:
                printf("Maximum node value: ");
                max(root);
                printf("\n");
                break;
            case 10:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (ch!=10);
    return 0;
}

// Function to insert a node in Binary Search Tree
bst* insert(bst* root, int data) {
    bst* new = (bst*)malloc(sizeof(bst));
    new->data = data;
    new->left = new->right = NULL;

    if (root == NULL)
        return new;
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}

// Preorder traversal of BST
void preorder(bst* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder traversal of BST
void inorder(bst* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Postorder traversal of BST
void postorder(bst* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Function to count total number of nodes in BST
void count(bst* root, int* p) {
    if (root != NULL) {
        (*p)++;
        count(root->left, p);
        count(root->right, p);
    }
}

// Function to count total number of leaf nodes in BST
void binarycountleaf(bst* root, int* p) {
    if (root != NULL) {
        if (root->left == NULL && root->right == NULL)
            (*p)++;
        binarycountleaf(root->left, p);
        binarycountleaf(root->right, p);
    }
}

// Function to count total number of nodes having left child only in BST
void countleftchild(bst* root, int* p) {
    if (root != NULL) {
        if (root->left != NULL && root->right == NULL)
            (*p)++;
        countleftchild(root->left, p);
        countleftchild(root->right, p);
    }
}

// Function to count total number of nodes in the left side of the root node in BST
void countleftroot(bst* root, int* p) {
    if (root == NULL) {
        if(root->left != NULL&&root->right==NULL){
            (*p)++;
        }
        countleftroot(root->left, p);
        countleftroot(root->right, p);
    } 
}

// Function to find maximum node value in BST
void max(bst* root) {
    if (root == NULL) {
        printf("BST is empty.");
        return;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    printf("%d", root->data);
}