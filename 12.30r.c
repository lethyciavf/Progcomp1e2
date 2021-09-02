#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double seno (double A, double a, double b, double c) {
	if (A == 6.4) {
	return 0; }
	else {
	return A - ( a / 6 ) + ( b / 120 ) - ( c / 5040 ) + seno(A, a, b, c);
	}
}

int main () {

double senA, p1, p2, p3;
double A=0;


while (A<=6.3) {
	p1 = pow(A,3);
	p2 = pow(A,5);
	p3 = pow(A,7);
	senA = seno(A,p1,p2,p3);
	A = A + 0.1;
	printf("Angulo: %f", A);
	printf(" sen(A): %f\n", senA);
	}
}

//NEM IDEIA