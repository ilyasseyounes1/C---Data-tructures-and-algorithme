#include <stdio.h>
#include <malloc.h>


typedef struct Node {
    int data;
    struct Node* link;
};


typedef struct Node Node;

int main() {
    struct Node A;
    struct Node temp = *( Node* ) malloc(sizeof(Node));
    temp.data = 2;
    temp.link = 0;
    A = temp;
    return 0;
}
