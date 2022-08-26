// 12.5	 Escreva um programa com uma função chamada Troca.   

// Inicialmente devem ser atribuídos os valores 100 e 200 para as variáveis locais num1 e num2, respectivamente.  

// Em seguida, a função Troca deve ser chamada.  A função deve fazer a troca dos valores, utilizando passagem de parâmetros por referência.

#include <stdio.h>
#include <stdlib.h>

void Troca(int* ptrA, int* ptrB){
  int temp = *ptrA;
  *ptrA = *ptrB;
  *ptrB = temp; 
}

int main() {

  int a, b;
  
  scanf(" %d %d", &a, &b);

  Troca(&a, &b);

  printf("A = %d | B = %d\n", a, b);

  return 0;
}