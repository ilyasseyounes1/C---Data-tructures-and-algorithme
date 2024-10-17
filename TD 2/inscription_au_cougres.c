#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct {
    int dejeuner;
    int diner;
}repasInfo;
typedef struct {
    char nom;
    char prenom;
    int hotel;
    bool conjoin;
    repasInfo repas;
}Participant;

typedef struct {
  Participant p [100];
}tabPart;

void nb2Etoiles (tabPart tabPart1){
    int i = 0;
    for( i = 0; i<100 ;i++){
        if (tabPart1.p [i].hotel == 2){
            printf("%c",tabPart1.p[i].nom);
            printf("%c",tabPart1.p[i].prenom);
        }
    }
}
int  nbDej (tabPart tabPart2){
    int dej = 0;
    for (int i = 0; i<100 ; i++){
        if (tabPart2.p[i].conjoin == false){
            dej += tabPart2.p[i].repas.dejeuner;
        }else {
            dej = (dej + tabPart2.p[i].repas.dejeuner)*2;
        }

    }
    return dej;
}
void facture (Participant p){

}
int main (){
    Participant p1 = {'ilyasse','younes',1,1};

    return 0;
}
