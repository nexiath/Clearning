#include <stdio.h>
#include <math.h>


int main(int argc, char **argv){

    float r, a, p;
    printf("entrez un radius\n");
    scanf("%f", &r);
    a = (r*r*M_PI);
    printf("L'aire est de : %f\n", a);
    p = (2*r*M_PI);
    printf("Le périmetre est de %f\n", p);

    // printf("Name : Alexandra Abramov");
    // printf("DOB    : July 14, 1975 ");
    // printf("Mobile : 99-9999999999");

    // if(__STDC_VERSION__ >= 201710L) {
    //     printf("We are using C18!\n");
    // }
    // else if (__STDC_VERSION__ > 20112L) {
    //     printf("We are using C11!\n");
    // } else{
    // printf("We are using another");
    // }

    // char char1 = 'X';
    // char char2 = 'M';
    // char char3 = 'L';
    
    // printf("Voila dans l'ordre %c%c%c \nEt dans le désordre %c%c%c\n", char1, char2, char3, char3, char2, char1 );

    // int longueur = 7;
    // int largeur = 5;
    // printf("L'aire est de : %d\nLe périmetre est de %d\n", longueur*largeur, (longueur*2)+(largeur*2));

    

    return 0;
}