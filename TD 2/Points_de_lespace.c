#include <stdio.h>
#include <math.h>
typedef struct {
    float x;
    float y;
}Point;
void afficher_point (Point p){
    printf("point x:%f , y: %f \n",p.x,p.y);
}
float distance_point (Point p1,Point p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    //return sqrt((p2.x - p1.x)*(p2.x - p1.x)+(p2.y - p1.y)*(p2.y - p1.y));
    }
Point barycentre (Point points [],int n){
    float sum_x = 0;
    float sum_y = 0;
    for (int i = 0; i < n ; i++){
        sum_x += points [i].x;
        sum_y += points [i].y;
    }
    Point barycenter;
    barycenter.x = sum_x/n;
    barycenter.y = sum_y/n;
    return barycenter;
}


int main (){
    Point p1 = {3.0,4.0};
    Point p2 = {5.2,7.0};
    afficher_point(p1);
    float distance = distance_point(p1,p2);
    printf("distance enter p1 et p2 : %f \n ",distance);
    Point points [] = {
            {1.2,2.0},
            {3.0,4.0},
            {5.6,6.0}
    };
    int n = 3;
    Point B = barycentre(points,n);
    printf("barycenter : x : %f , y: %f  \n ", B.x,B.y);
    return 0;

}
