#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

 Node* head = NULL;

// Print function to print the entire list
void Print() {
     Node* temp = head;
    printf("List is: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Insert function to add a new node at the beginning
void Insert(int x) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (head != NULL) temp-> next = head;
    head = temp;
}
void InsertAfter (int x,int index){
     Node* node = malloc(sizeof (struct Node));
     Node* temp = head;
    if (head->next == NULL){
        Insert(x);
        return;
    }
    while (index != 0 ){
        temp = temp ->next;
        index--;
    }
    node -> data = x;
    node -> next = temp -> next;
    temp -> next = node ;

}
void Delet (int index){
   //  Node* node = (Node*) malloc(sizeof(struct Node));
     Node * node = head;
     if (index == 1){
         head = node -> next ;
         //free(node);
     }
    for (int i = 0; i<index-2;i++){
        node = node -> next;
    }
    Node* temp = node -> next;
    node -> next = temp -> next;
    free(temp);
}
int main8() {
    int n, x, i;

    printf("How many numbers?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    InsertAfter(12,2)
    ;
    InsertAfter (13,4);
    Print();
    Delet(3);
    Print();

    return 0;
}


