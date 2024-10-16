#include <stdio.h>
#include <stdlib.h>
#include "Structur.h"
int main (){
    Node* head = NULL;
    add_at_end(head,1);
    add_at_end(head,2);
    print(head);
    return 0;
}