#include <stdio.h>
#include <stdlib.h>
struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};
void preOrderNonRecursive(struct BinaryTreeNode *root){
      struct DynArrayStack *S = CreateStack();
      while(1)  {
            while(root) {
                //Process current node
                printf("%d ", root->data);
                Push(S, root);
                //If left subtree exists, add to stack
                root = root->left;
            }
            if(IsEmptyStack(S)) 
                break;
            root = Pop(S); 
            //Indicates completion of left subtree and current node, now go to right subtree
            root = root->right; 
      }
      DeleteStack(S);
}

int testPreOrderNonRecursive(){
    /* Sample binary tree is
            9
          /   \
        19      1
         \    /  \
          3  6   19
    */
    struct BinaryTreeNode* root = createNewNode(9);
    root->left        = createNewNode(19);
    root->right       = createNewNode(1);
    struct BinaryTreeNode* temp = root->left;
    temp->right  = createNewNode(3);
    temp = root->right;
    temp->left = createNewNode(6);
    temp->right = createNewNode(19);
    preOrderNonRecursive(root);
    return 0;
}
