/*
 * calculo.c
 *
 *  Created on: Apr 4, 2022
 *      Author: advalos
 */



#include <stdio.h>
#include <stdlib.h>

void tarjetaDebito(float precio, float *descuento)
{
	*descuento = (precio *90)/100;
}
void tarjetaDeCredito(float precio, float *interes)
{
	*interes = (precio *125)/100;
}
void bitcoin(float precio, float *conversor)
{
	*conversor = precio/4606954.55;
}
void precioPorKm(float precio, float km, float *precioUnitario)
{
	*precioUnitario = precio / km;
}
void diferenciaDePrecio( float precioAerolinea, float precioLatam, float *diferencia)
{
	*diferencia = precioAerolinea - precioLatam;
}
void hacerCalculos(float precio, float km, float *descuento,float *interes, float *conversor, float *precioUnitario)
{
	tarjetaDebito(precio, descuento);
	tarjetaDeCredito(precio,interes);
	bitcoin(precio, conversor);
	precioPorKm(precio,km,precioUnitario);

}
void informarResultado(float descuento, float interes, float conversor, float precioUnitario)
{
	printf("\na) Precio con tarjeta de débito: $%.2f\n"
			"b) Precio con tarjeta de crédito: $%.2f\n"
			"c) Precio pagando con bitcoin: $%f\n"
			"d) Precio unitario: $%.2f\n", descuento, interes, conversor, precioUnitario);
}



