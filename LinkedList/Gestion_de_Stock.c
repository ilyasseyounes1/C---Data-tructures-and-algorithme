#include <stdio.h>
#include <stdlib.h>

typedef struct {
    short numero;
    char libelle [29];
    short quantite;
    short prix;
}Article;

void SaisieArticle (Article* a ) {
    printf("enter article  number : ");
    scanf("%[^\n]d", &a->numero);
     printf("enter article name : ");
    scanf("%s", a -> libelle);
    printf("enter quantity : ");
    scanf("%d", &a -> quantite);
    printf("enter price : ");
    scanf("%f", &a -> prix);
}
void AfficherArticle (Article a){
    printf("\n Article Number : %d \n",a.numero);
    printf("Libelle : %s \n ",a.libelle);
    printf("quantitie : %d\n" , a.quantite);
    printf("prix ; %.3f \n ",a.prix);
}
void SaisieTabArticle (Article A[] ,int n) {
    for (int i = 0; i < n; i++) {
        printf("\n Article %d \n",i+1);
        SaisieArticle(&A[i]);
    }
}
void AfficheTabStock (Article A[],int n , int q) {
    for (int i = 0; i < n; i++) {
        if (A[i].quantite == q) {
            AfficherArticle(A[i]);
        }
    }
}
int main (){
    Article article;
    SaisieArticle(&article);
    AfficherArticle(article);

    int n = 5 ;
    int q = 10;
    Article A [5];
    printf ("donner les element de tab \n");
    for (int i = 0 ; i < n ; i++){
        printf("article : %d \n ",i + 1);
        SaisieArticle(&A[i]);
    }
    printf("\n");
    AfficheTabStock(A,n,q);


    return  0;
}

