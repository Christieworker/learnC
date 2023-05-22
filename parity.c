#include <stdio.h>
int main(){
    int number; 
    printf("Entrez un nombre\t");
    scanf("%d", &number);
    if (number%2 == 0) {
        printf("Le nombre est pair\n");

    } else {
        printf("Le nombre est impair\n");
    }

}