// Primeira aula
// 07/08/2015

#include <stdio.h>
#include <math.h>

float calculo (int x)

{
    float k = 0;
    int w;
    for (w = x; w < 5*x ; w++)
        k += pow(sin(w),2);
    return k;
}

main()

{
    int a;
    float b;
    printf ("Digite valor: ");
    scanf ("%i", &a);
    b = calculo (a);
    printf ("\n solucao: %.3f", b);
}
