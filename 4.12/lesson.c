#include <stdio.h>
#include <stdlib.h>

typedef int Data
typedef struct Node Node;

struct Node
    {
    Data val;
    Node *left;
    Node *right;
    };
    
Node * tree_add(Node*, Data);
void tree_print_symetric(Node*);

int main()
    {
    Node *tree = NULL;
    Data x;
    
    while(scanf("%d", &x))
        tree = tree_add(tree, x);
    
    
    return 0;
    }
    
struct Node * tree_add(struct Node* tree, Data x)
    {
    
    if(tree == NULL)
        {
        tree = (struct Node*) malloc(sizeof(struct Node));
    
        tree -> left = NULL;
        tree -> right = NULL;
    
        tree -> val = x;
        }
    else   
        {
        if (x < tree->val)
            tree->left = tree_add(tree->left, x);
        else
            if(x > tree-> val)
                tree->right = tree_add(tree->right, x);
        }
    
    return tree;
    }
    
void tree_print(struct Node* tree)
    {
    if (tree == NULL)
        return;
    
    tree_print(tree->left);
    printf("%d ", tree->val);
    
    tree_print(tree->right);
    return;
    }
    
void tree_destroy(struct Node * tree){
    if(!tree)
	return;
	
    if(tree->right)
        tree_destroy(tree->right);
        
    if(tree->left)
        tree_destroy(tree->left);
    
    free(tree);
}
