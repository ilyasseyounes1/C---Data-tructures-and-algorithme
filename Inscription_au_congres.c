#include <stdio.h>
#include <stdlib.h>
typedef struct {
   int dejeuner;
   int diner;
   int etoil;
}Repas;

typedef struct {
   char name  [30];
   char lastname [30];
   Repas repaInfo;
}Particcipant;

typedef  struct {
    Particcipant p [100];
}Tabpart;


Particcipant nb2Etoil (Tabpart *Tab){
    for ( int i -
}