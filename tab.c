#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fw;
    fw = fopen("text.txt", "w");
    if(fw==NULL) {
        perror("erreur lors de l'écriture");
        return 1;
    }

    int tab[60];
    int n = sizeof(tab) / sizeof(tab[0]);
    tab[0] = 1;

    for(int i = 0; i<n; i++){
        tab[i] = i+1;
        // printf("%d\n", tab[i]);
        fprintf(fw, "%d\n", tab[i]);
    }

    fclose(fw);
    return 0;
}