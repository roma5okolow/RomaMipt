#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef int Data;

struct Node
{
    Data val;
    struct Node* left;
    struct Node* right;
};
    

    
struct Node * tree_add(struct Node*, Data x);
void tree_print(struct Node* tree);
void tree_destroy(struct Node * tree);
int tree_height(struct Node * tree);
void leaf(struct Node *tree);

int main()
{
    struct Node *tree = NULL;
    Data x;
    
    while(scanf("%d", &x))
    {
        if (x == 0)
            break;
        tree = tree_add(tree, x);
        
    }
    leaf(tree);
    tree_destroy(tree);
    return 0;
}
    
struct Node * tree_add(struct Node* tree, Data x)
{
    
    if(!tree)
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
    
void tree_destroy(struct Node * tree)
{
    if(!tree)
	return;
	
    if(tree->right)
        tree_destroy(tree->right);
        
    if(tree->left)
        tree_destroy(tree->left);
    
    free(tree);
}

int tree_height(struct Node * tree) 
{
    int l, r, h = 0;
    if(tree != NULL) 
    {
        l = tree_height(tree->left);
        r = tree_height(tree->right);
        h = ((l > r) ? l : r) + 1;
    }
    return h;
}

void leaf(struct Node *tree) 
{
    if ((tree->left == NULL) && (tree->right == NULL))
        printf("%d ", tree->val);
    else
    {
        if (tree->left)
            leaf(tree->left);
        if (tree->right)
            leaf(tree->right);
    }
}
