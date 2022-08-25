// Escrever um programa que lê 2 números inteiros e em seguida chama a função EDivisivel. 

// A função 'EDivisivel(int a, int b)' 

// deverá retornar 1 se o resto da divisão de a por b for zero, ou seja, se a for divisível por b. 

// Caso contrário, a função deverá retornar zero.

#include <stdio.h>
#include <stdlib.h>

int EDivisivel(int a, int b) {
  if ( a % b == 0 ) 
  {
    return 1;
  }
  else 
  {
    return 0;
  }
}

int main( )
{

  int dividendo, divisor;

  printf("Digite o dividendo: ");
  scanf(" %d", &dividendo);

  printf("Digite o divisor: ");
  scanf(" %d", &divisor);

  int resposta = EDivisivel(dividendo, divisor);
  printf("RESPOSTA DA FUNCAO = %d", resposta);

  return 0;
}