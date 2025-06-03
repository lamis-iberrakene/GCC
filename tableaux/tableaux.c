#include <stdio.h>

int main() {

   int notes[5] = {12, 15, 14, 10, 18};
   int somme = 0;

 for (int i = 0; i < 5; i++) {
     
       somme += notes[i];
   }

 printf("La somme des notes est : %d\n", somme);

 return 0;
}

