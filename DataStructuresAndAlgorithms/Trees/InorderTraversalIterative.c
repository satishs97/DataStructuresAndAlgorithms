#include <stdio.h>
#include <stdlib.h>
struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};

void inOrderNonRecursive(struct BinaryTreeNode *root){
      struct Stack *S = CreateStack();
      while(1)  {
            while(root) {
                  Push(S,root);
                  //Got left subtree and keep on adding to stack
                  root = root->left;
            }
            if(IsEmptyStack(S)) 
                break;
            root = Pop(S); 

            printf("%d  ", root->data);   //After popping, process the current node
            //Indicates completion of left subtree and current node, now go to right subtree
            root = root->right; 
      }
      DeleteStack(S);
}


int testInOrderIterative(){
    /* Sample binary tree is
            9
          /   \
        19      1
         \    /  \
          3  6   10
    */
    struct BinaryTreeNode* root = createNewNode(9);
    root->left        = createNewNode(19);
    root->right       = createNewNode(1);
    struct BinaryTreeNode* temp = root->left;
    temp->right  = createNewNode(3);
    temp = root->right;
    temp->left = createNewNode(6);
    temp->left = createNewNode(10);
    inOrderNonRecursive(root);
    return 0;
}
