#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int playgame(int essai, int max) {

    srand(time(NULL));
    int number = rand() % max;
    int entry;
    int count = essai;
    char stay;
    
    do{ 
        printf("Entrez un nombre\t");
        scanf("%d", &entry);
        
        if (entry < number) {
            printf("\nDésolé...😕 Votre nombre est inférieur à celui généré par l'ordi.\n");
        
        } else if (entry > number) {
            printf("\nDésolé...😕 Votre nombre est supérieur à celui généré par l'ordi.\n");
        } else {
            printf("\nBien joué !😎 Le nombre est %d\n", number); 
        }
        
        count = count - 1;
        
        if (count == 0 && entry != number) {
            printf("\nGame over!😭\n");
            printf("\nSouhaitez-vous continuer ? o/n\n");
            scanf("%s", &stay); 
            if (stay == 'o') {
                count = essai;
            } 
        } else if (count == 1 && entry != number){
            printf("\nIl vous reste %d essai\n\n", count);
        } else {
            printf("\nIl vous reste %d essais\n\n", count);
        }
    } while (entry != number && count > 0);
}

int main() {
    
    playgame(5, 100);
    exit(EXIT_SUCCESS);
}

