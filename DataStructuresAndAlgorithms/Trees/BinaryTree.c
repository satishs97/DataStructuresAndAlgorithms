#include <stdio.h>
#include <stdlib.h>
struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};
struct BinaryTreeNode* createNewNode(int data){
    struct BinaryTreeNode* node = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
