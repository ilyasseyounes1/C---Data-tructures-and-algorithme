#include <stdio.h>
#include <stdlib.h>
#include "Structur.h"
      // Version 1.0:
void add_at_beg (Node** head , int data){
    Node* node = malloc(sizeof (Node));
    node -> data = data;
    node -> next = NULL;

    node -> next = *head;
    *head = node;
}
     // Version 2.0:
Node* add_at_beginning (Node* head , int data){
    Node* node = malloc (sizeof(Node));
    node->data = data;
    node->next = NULL;

    node->next = head;
    head = node;
    return head;
}
Node* add_at_end(Node* head, int data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if (head == NULL) {
        // If the list is empty, the new node becomes the head
        return node;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    return head;
}
void add_at_pos(Node* head , int data , int pos){
    Node* temp = head;
    Node* node = malloc (sizeof(Node));
    node->data = data;
    node->next = NULL;

    pos--;
    // time complexity : O(n) if we have n in worst case n-1 :
    while (pos != 1){
        temp = temp -> next;
        pos--;
    }
    node->next = temp->next;
    temp->next = node;

}
void print (Node* head){
    Node* temp = head;
    printf("List is:");
    while (temp != NULL){
        printf("%d ",temp->data );
        temp = temp->next;
    }
    printf("\n");
}
void delet_first(Node* head){
    
}

