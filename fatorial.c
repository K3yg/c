#include <stdio.h>
 
int main() {
 int n, fat;
 printf("Insira o valor desejado para calcular o fatorial: ");
 scanf("%d", &n);
 
 for(fat = 1; n>1; n = n -1){
  fat = fat * n;
 }
  
 printf("O fatorial é: %d", fat);
 return 0;
}
