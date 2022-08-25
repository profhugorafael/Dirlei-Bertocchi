// Construir um programa que lê caracteres, em seguida chama uma função que testa se cada um dos caracteres é a letra A.

// Usar passagem de parâmetros por valor. Se o caractere for A, a função deve retornar 1, caso contrário, deve retornar 0.

// Devem ser lidos e testados, um a um, 5 caracteres.

#include <stdio.h>
#include <stdlib.h>

#define MAX_CARACTERES 20

int ehLetraA(char c)
{
  if (c == 'a' || c == 'A')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{

  // stack caracteres
  // -> []
  char caracteres[MAX_CARACTERES];

  printf("Digite uma sequencia de caracteres para ser analisada: ");
  scanf(" %s", caracteres);

  for (int i = 0; i < 5; i++)
  { 
    int result = ehLetraA(caracteres[i]);
    printf("Retorno na posicao #%d = %d\n", i+1, result);
  }

  return 0;
}