/*
 * calculo.c
 *
 *  Created on: Apr 4, 2022
 *      Author: advalos
 */



#include <stdio.h>
#include <stdlib.h>

void imprimirMenu(int *opcionElegida){
	printf("\n1. Ingresar Kilometros \n"
			"2. Ingresar Precio de Vuelos \n"
			"3. Calcular todos los costos \n"
			"4. Informar Resultados \n"
			"5. Carga forzada de datos \n"
			"6. Salir\n");
	printf("\nIngrese una opcion: ");
	scanf("%d", opcionElegida);
}
void imprimirSubMenu(int *opcionElegidaSubMenu)
{
	printf("\n1)Precio vuelo Aerolíneas: "
			"\n2)Precio vuelo Latam: \n");
	printf("\nIngrese una opcion: ");
	scanf("%d",opcionElegidaSubMenu );
}
void obtenerKm(int *km)
{
	do
	{
		printf("Ingresar Kilómetros: ");
		scanf("%d", km);
	}while(*km == 0);
}
void obtenerPrecio(float *precio)
{
	do
	{
		printf("\nIngrese precio: ");
		scanf("%f", precio);
	}while(*precio <= 0);
}
void imprimirCalculosARealizar(void)
{
	printf("\na) Tarjeta de débito (descuento 10)"
			"\nb) Tarjeta de crédito (interés 25)"
			"\nc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)"
			"\nd) Mostrar precio por km (precio unitario)"
			"\ne) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
}
void setearValoresCargaForzada(int *km, float *precioAerolinea, float *precioLatam)
{
	*km = 7090;
	*precioAerolinea= 162965;
	*precioLatam= 159339;
}
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
void precioPorKm(float precio, int km, float *precioUnitario)
{
	*precioUnitario = precio / km;
}
void diferenciaDePrecio( float precioAerolinea, float precioLatam, float *diferencia)
{
	if(precioAerolinea > precioLatam)
	{
		*diferencia = precioAerolinea - precioLatam;
	}else{

		*diferencia = precioLatam - precioAerolinea;
	}

}
void hacerCalculos(float precio, int km, float *descuento,float *interes, float *conversor, float *precioUnitario)
{
	tarjetaDebito(precio, descuento);
	tarjetaDeCredito(precio,interes);
	bitcoin(precio, conversor);
	precioPorKm(precio,km,precioUnitario);

}
void imprimirResultado(float descuento, float interes, float conversor, float precioUnitario)
{
	printf("\na) Precio con tarjeta de débito: $%.2f\n"
			"b) Precio con tarjeta de crédito: $%.2f\n"
			"c) Precio pagando con bitcoin: $%f\n"
			"d) Precio unitario: $%.2f\n", descuento, interes, conversor, precioUnitario);
}



