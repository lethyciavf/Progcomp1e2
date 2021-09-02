#include <stdio.h>
#include <stdlib.h>
#include <math.h>


	
/*double funcao(double pi, double N, int i, double a) {
	if (a < 0.0001)
	return 0;
	else {
	a = 4/N;
	
	if (i == 1) {
	pi = pi + a;
	i = 0; }
	
	else {
	pi = pi - a;
	i = 1; }
	
	N = N + 2; 
	return pi+funcao(pi, N, i, a);
	}
}

double funcao(double pi, double N, int i, double a) {
	if (a < 0.0001)
	return 0;
	else {
	a = 4/N;
	
	if (i == 1) {
	return pi + funcao(pi-a,N+2,i=1,a);
	//i = 0;
	 }
	
	else {
	return pi + funcao(pi+a,N+2,i=0,a);
	//i = 1; 
	}
	
	//N = N + 2; 
	//return pi+funcao(pi, N, i, a);
	}
}*/
	
	
int main () {
	double pi, N, a, calc;
	int i;
	pi = 4;
	N = 3;
	i = 0;
	a = 4/3;
	calc = funcao(pi,N,i,a);
	printf("Total %f\n", calc);
}
	