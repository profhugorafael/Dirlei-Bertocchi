
// 12.2	 Construir um programa que solicita ao usuário um número inteiro.   

// Em seguida, uma função deve ser chamada para contar quantos números pares existem entre 0 e o número digitado. 

// A função deve contar a quantidade de retornar o resultado para o programa principal. 

// Construir a função com passagem de parâmetros por valor e com retorno.

#include <stdio.h>

int contarPares( int numeroDigitado ) 
{
  int contador = 0;
  
  for (int index = 1; index < numeroDigitado; index++)
  {
    if( index % 2 == 0 )
    {
      contador++;
    }
  }
  
  return contador;
}

int main( )
{

  // criando variáveis
  int entrada;

  // socilita ao usuário
  printf("Digite o valor da entrada?: ");
  scanf(" %d", &entrada);

  int resultado = contarPares(entrada);
  printf( "TOTAL DE PARES = %d\n", contarPares(entrada) );

  return 0;
}
