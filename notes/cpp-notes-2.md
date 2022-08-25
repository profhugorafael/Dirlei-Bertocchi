# Funções

f(x) = x + 2

reescrevendo em c++:
```c++
  double f(double x) {
    return x + 2;
  } 

  int somar(int a, int b) {
    return a + b;
  }

  double media(double a, double b) {
    return (a + b) / 2;
  }
```

## O que são?

Funções são uma série de comandos a serem executados, podendo ou não chegar em algum resultado.

## Retorno

Nem todas as funções em programação tem retorno obrigatório, pois algumas vezes apenas queremos agrupar vários comandos, sem a necessidade de resposta.

```cpp
  void sayHello() {
    printf("Hello!");
  }
```