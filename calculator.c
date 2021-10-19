#include <stdio.h>
int main () {
  int a, b, c;
  printf("\nDigite um valor: ");
  scanf("%d", &a);

  printf("\nDigite outro valor: ");
  scanf("%d", &b);

  c = a + b;
  printf("\nA soma de %d com %d é: %d", a, b, c);

  c = a - b;
  printf("\nA subtração de %d por %d é: %d", a, b, c);

  c = a * b;
  printf("\nA multiplicação de %d por %d é: %d", a, b, c);

  c = a / b;
  printf("\nA divisão de %d por %d é: %d", a, b, c);

  return 0;
}
