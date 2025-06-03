#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret;
    int essai;
    int cpt = 0;

    srand(time(NULL));
    secret = rand() % 100 + 1;
    printf("Devine le nombre entre 1 et 100\n");
    scanf("%d", &essai);
    cpt++;

    while (essai != secret) {
        if (essai < secret) {
            printf("Trop petit !\n");
        } else {
            printf("Trop grand !\n");  
        }
        printf("Réessaie : ");
        scanf("%d", &essai);
        cpt++;
    }
    printf("Bravo ! Tu as trouvé en %d essais.\n", cpt);

    return 0;
}

