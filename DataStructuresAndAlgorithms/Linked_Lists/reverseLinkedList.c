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

/* Reverses a given linked list, and return the head pointer of reversed linked list */
struct ListNode* reverseLinkedList(struct ListNode *head) {
    struct ListNode *previous, *current, *next;
    previous = NULL;
    current = head;
 
    while (current != NULL) {
        next  = current->next;  
        current->next = previous;   
        previous = current;
        current = next;
    }
    return previous;
}

struct ListNode * reverseLinkedListRecursive(struct ListNode *head) {
    if (head == NULL || head->next == NULL) 
            return head;
    struct ListNode *secondElem = head->next;
    // Need to unlink list from the rest or you will get a cycle
    head->next = NULL;                    
   // Reverse everything from the second element on
    struct ListNode *reverseRest = reverseLinkedListRecursive(secondElem);    
    secondElem->next = head;          // then we join the two lists
    return reverseRest;
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
    struct ListNode *middle;
    initialize();
    /* Creating a linked List*/
    insert(3);  
    insert(8); 
    insert(12); 
    insert(0);
    insert(35);
    insert(6);
    insert(10);
    insert(350);
    insert(16);
    insert(19); 
    printf("\nLinked List\n");
    printLinkedList(head);
    printf("\nLinked list in reverse\n");
    head = reverseLinkedListRecursive(head);
    printLinkedList(head);
    return 0;
}
