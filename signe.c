#include <stdio.h>
int main(){
    int number; 
    printf("Entrez un nombre\t");
    scanf("%d", &number);
    if (number < 0) {
        printf("Le nombre est négatif\n");

    } else if (number == 0) {
        printf("Le nombre est nul\n");
    }else {
        printf("Le nombre est positif\n");
    }

}