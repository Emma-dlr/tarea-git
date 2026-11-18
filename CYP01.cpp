#include <stdio.h>

int main(void)
{
	//DECLARACION DE VARIABLES
	int ancho;
	int alto;
	float por_x;
	float por_y;
	float por_ancho_elemento;
	float por_alto_elemento;

	//COORDENADAS
	int x1;
	int x2;
	int y1;
	int y2;
	int x02;
	int y02;

	//ENTRADA
	scanf_s("%i", &ancho);
	scanf_s("%i", &alto);
	scanf_s("%f", &por_x);
	scanf_s("%f", &por_y);
	scanf_s("%f", &por_ancho_elemento);
	scanf_s("%f", &por_alto_elemento);

	//OPERACIONES
	x1 = ((float)(ancho * por_x));
	y1 = ((float)(alto * por_y));

	x02 = (float(ancho * por_ancho_elemento));
	y02 = (float(alto * por_alto_elemento));


	x2 = (int)((float)x1 + x02);
	y2 = (int)((float)y1 + y02);

	//SALIDAS
	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, por_x, por_y, por_ancho_elemento, por_alto_elemento, x1, y1, x2, y2);

	return 0;
}