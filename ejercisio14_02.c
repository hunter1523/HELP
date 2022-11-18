#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define VALOR((int) 10)

int main(void) {
  int i1 = 0, i2 = 0, m, n = 0;
  int v[VALOR];

  printf(" Adivine el numero misterioso. \r \n \n \n");

  srand(time(NULL));
  m = rand() % 100;

  printf(" El numero misterioso es: \n %d \r \n", m);

  do {
    printf(" Ingrese un numero: \r \n");
    scanf("%d", & v[i1]);

    while ((i2 < n) && (v[i2] != v[i1])) {
      i2 += 1;
    }

    if (v[i2] != v[i1]) {
      i1 += 1;
    } else {
      printf(" Numero repetido. \n \n");
    }

    i2 = 0;
    n += 1;
  } while ((m != v[i1]) && (i1 <= VALOR));

  if (m == v[i1]) {
    printf(" Felicidades acertaste el numero misterioso\r \n");
  } else {
    printf(" Fallaste, el numero misterioso era: \n %d \r \n", m);
  }
  return (0);
}
