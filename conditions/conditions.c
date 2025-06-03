#include <stdio.h>

int main() {
int note;

 printf("Entrez votre note (sur 20) : ");
 scanf("%d", &note);

 if (note >= 16) {
 printf("Très bien !\n");
 }
  else if (note >= 10) {
  printf("Suffisant.\n");  }
  else {
  printf("Insuffisant.\n");   }

  return 0;
}

