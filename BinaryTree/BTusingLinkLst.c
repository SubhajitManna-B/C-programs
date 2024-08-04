#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node* right;
};

struct node* CreateNode(int data){
    struct node *n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n; 
}

void InOrder(struct node *root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d\t",root->data);
        InOrder(root->right);
    }
}

void PreOrder(struct node *root){
    if(root != NULL){
        printf("%d\t",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(struct node *root){
    if(root != NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d\t",root->data);
    }
}

int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

Node * search(node* root, key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}


int main(){
    struct node *p = CreateNode(6);
    struct node* p1 = CreateNode(3);
    struct node* p2 = CreateNode(9);
    struct node* p3 = CreateNode(1);
    struct node* p4 = CreateNode(4);
    struct node* p5 = CreateNode(7);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    
    InOrder(p);
    printf("\n");
    PreOrder(p);
    printf("\n");
    PostOrder(p);
    printf("\n"); 

    int chk = isBST(p);
    if(chk == 0){
        printf("The binary tree is not the BST.");
    }
    else{
        printf("The binary tree is the BST.");
    }
}