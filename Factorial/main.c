#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial (n - 1);
}

int main ()
{
    int numero;

    printf("De que numero deseas conocer el factorial?\n");
    scanf ("%d", &numero);
    printf("El factorial es: %d", factorial(numero));
}

//#include <stdio.h>
//#include <stdlib.h>

//int f(int n)
//{
//    if (n <= 5)
//        return 1;
//    else
//        return 5 * f (n - 2);
//}

//int main ()
//{
  //  int numero;

 //   printf("De que numero deseas conocer el factorial?\n");
 //   scanf ("%d", &numero);
  //  printf("Formula recursiva %d", f(numero));
//}
//
