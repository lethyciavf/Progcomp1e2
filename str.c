#include <stdio.h>

int main ()
{
	struct linha_premium
	{
		char modelo[30];
		char motor[10];
		char cambio[10];
		int potencia;
		float torque;
	};
	
struct linha_premium automovel;

printf ("\n Entrada de informacoes \n");

printf ("\n Modelo: ");
scanf ("%s", &automovel.modelo);

printf ("\n Motor: ");
scanf ("%s", &automovel.motor);

printf ("\n Cambio: ");
scanf ("%s", &automovel.cambio);

printf ("\n Potencia (cv): ");
scanf ("%d", &automovel.potencia);

printf ("\n Torque: ");
scanf ("%f", &automovel.torque);


printf ("\n Ficha Tecnica \n");

printf ("\n O Modelo %s", automovel.modelo);
printf (" eh equipado com motor %s", automovel.motor);
printf (" e cambio %s", automovel.cambio);
printf (". Sua potencia eh de %d", automovel.potencia);
printf ("cv e incriveis %.1f %s", automovel.torque, "kgfm de torque. \n");
printf ("\n");

}