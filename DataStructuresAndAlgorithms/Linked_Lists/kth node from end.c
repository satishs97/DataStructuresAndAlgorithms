#include <stdio.h>
#include <stdlib.h>
  
/* A structure of linked list ListNode */
struct ListNode {
  int data;
  struct ListNode *next;
} *head;
 
void initialize(){
    head = NULL;
}
 
/* 
Given a Inserts a ListNode in pTemp of a singly linked list. 
*/
void insert(int data) {
    /* Create a new Linked List ListNode */
    struct ListNode* newNode = (struct ListNode*) malloc(sizeof(struct ListNode));
    newNode->data  = data;
    /* Next pointer of new ListNode will point to head ListNode of linked list  */
    newNode->next = head;
    /* make new ListNode as new head of linked list */
    head = newNode;
    printf("Inserted Element : %d\n", data);
}
 
int getLength(struct ListNode *head){
    /* Input Validation */
    if (head == NULL) { 
       printf("Error : Invalid ListNode pointer !!!\n");       
       return 0;  
    }
      
    int length =0;
    while(head != NULL){
        head = head->next;
        length++;
    }
    return length;
}
 
struct ListNode* kthNodeFromEnd(struct ListNode* head, int k){
    struct ListNode *pTemp, *kthNode;
    int i;
    pTemp = kthNode = head;
    /* k should be less than length of Linked List */
    if(k > getLength(head)){
        printf("Error : k is greater than length of linked list\n");
        return NULL;
    }
    /* Move pTemp pointer k-1 ListNodes. This will create 
    a difference of k-1 ListNodes between pTemp and kthNode */
    for(i = 0; i < k-1; i++){
        pTemp = pTemp->next;
    }
    /* Now, move both pointers together till pTemp reaches 
    last ListNode of linked list. when pTemp reaches last ListNode 
    kthNode pointer will be pointing to Nth last ListNode*/
    while(pTemp->next != NULL){
        pTemp = pTemp->next;
        kthNode = kthNode->next;
    }
     
    return kthNode;
}
/*
Prints a linked list from head ListNode till tail ListNode 
*/
void printLinkedList(struct ListNode *ListNodePtr) {
  while (ListNodePtr != NULL) {
     printf("%d", ListNodePtr->data);
     ListNodePtr = ListNodePtr->next;
     if(ListNodePtr != NULL)
         printf("-->");
  }
}
  
int main() {
    struct ListNode *kthNode;
    initialize();
    /* Creating a linked List*/
    insert(3);  
    insert(8); 
    insert(12); 
    insert(0);
    insert(35);
    insert(6);
     
    printf("\nLinked List\n");
    printLinkedList(head);
    kthNode = kthNodeFromEnd(head, 3);
    printf("\nkth node from end in the linked list is %d", kthNode->data);
    return 0;
}
