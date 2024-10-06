#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Print function to print the entire list
void Print() {
    struct Node* temp = head;
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
    temp->next = head;
    head = temp;
}
void InsertAfter (int x,int index){
    struct Node* node = malloc(sizeof (struct Node));
    struct Node* temp = head;
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
    struct Node* node = malloc(sizeof(struct Node));

    while (index != 0){
        node = node ->next;
        index--;
    }
    if (node == head){
        head = head -> next;
    }else if (node -> next -> next == NULL){
        node -> next = NULL;
    }else
    node -> next = node -> next -> next;

}
int main() {
    int n, x, i;

    printf("How many numbers?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    InsertAfter(12,2);
    InsertAfter (13,4);
    Print();
    Delet(2);
    Print();

    return 0;
}

