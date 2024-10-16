#ifndef C_DATA_STRUCTURES_AND_ALGORITHMES_STRUCTUR_H
#define C_DATA_STRUCTURES_AND_ALGORITHMES_STRUCTUR_H
typedef struct {
    int data;
    struct Node* next;
}Node;
void add_at_beg (Node** head , int data);
Node* add_at_beginning (Node* head , int data);
Node* add_at_end(Node* head, int data);
void add_at_pos(Node* head , int data , int pos);
void print (Node* head);

#endif //C_DATA_STRUCTURES_AND_ALGORITHMES_STRUCTUR_H
