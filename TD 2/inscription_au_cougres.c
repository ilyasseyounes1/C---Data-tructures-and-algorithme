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
    bool conjoint;
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
        if (tabPart2.p[i].conjoint == false){
            dej += tabPart2.p[i].repas.dejeuner;
        }else {
            dej = (dej + tabPart2.p[i].repas.dejeuner)+2;
        }
    }
    return dej;
}
int  facture (Participant p){
    int total = 0;

    if (p.hotel == 2){
        total += 75;
    }else{
        total+=100;
    }
    int ropas_price;
    if(p.repas.dejeuner == 1 && p.repas.diner == 1){
        total += 15 + 35;
    }else if (p.repas.diner == 1) {
        total += 15;
    } else {
       total += 35;
    }
    if (p.conjoint == false)
        ropas_price *= 2;

    total += ropas_price;
    return total;

}
int main (){
    Participant p1 = {'ilyasse','younes',1,1};

    return 0;
}
