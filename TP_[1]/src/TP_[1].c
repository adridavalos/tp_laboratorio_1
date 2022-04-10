/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Davalos Insaurralde Adriana Maria
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include"calculo.h"

int main(void)
{
	int menuPrincipa;
	int subMenu;
	float km=0;
	float precioAerolinea=0;
	float precioLatam=0;
	float descuentoAerolinea;
	float descuentoLatam;
	float interesAerolinea;
	float interesLatam;
	float conversorAerolinea;
	float conversorLatam;
	float precioUnitarioAerolinea;
	float precioUnitarioLatam;
	float diferencia;



	do{
		printf("\n1. Ingresar Kilometros \n"
				"2. Ingresar Precio de Vuelos \n"
				"3. Calcular todos los costos \n"
				"4. Informar Resultados \n"
				"5. Carga forzada de datos \n"
				"6. Salir\n");
		printf("\nIngrese una opcion: ");
		scanf("%d", &menuPrincipa);

		switch (menuPrincipa)
		{
			case 1:
				do
				{
					printf("Ingresar Kilómetros: ");
					scanf("%f", &km);
				}while(km == 0);
			    break;
			case 2:
				printf("\n1)Precio vuelo Aerolíneas: "
						"\n2)Precio vuelo Latam:\n");
				printf("\nIngrese una opcion: ");
				scanf("%d", &subMenu);

				switch (subMenu)
				{
				    case 1:
				    	do
				    	{
				    		printf("\nIngrese precio Aerolineas: ");
				    		scanf("%f", &precioAerolinea);
				    	}while(precioAerolinea <= 0);

				        break;
				    case 2:
				    	do
				    	{
				    		printf("\nIngrese precio Latam: ");
				    		scanf("%f", &precioLatam);
				    	}while(precioLatam <= 0);

				    	break;
				    default:
				    	printf("\nOpcion no valida\n");
						break;
				}
			    break;
			case 3:
				if(precioAerolinea == 0 && km == 0 && precioLatam == 0)
				{
					printf("\nError vuelva a ingresar los datos\n");
				}else
				{
					if(precioAerolinea > 0 && km > 0)
					{
						hacerCalculos(precioAerolinea, km, &descuentoAerolinea,&interesAerolinea, &conversorAerolinea, &precioUnitarioAerolinea);
					}
					if(precioLatam > 0 && km > 0)
					{
						hacerCalculos(precioLatam, km, &descuentoLatam, &interesLatam, &conversorLatam, &precioUnitarioLatam);
					}
					if(precioAerolinea > 0 && km > 0 && precioLatam > 0)
					{
						diferenciaDePrecio(precioAerolinea, precioLatam, &diferencia);
					}
				}




			    break;
			case 4:

				if(precioAerolinea == 0 && km == 0 && precioLatam == 0)
				{
									printf("\nError vuelva a ingresar los datos\n");
				}else{
					if(precioAerolinea > 0 && km > 0)
					{
						printf("\nPrecio Aerolineas: $%.2f", precioAerolinea);
						informarResultado(descuentoAerolinea, interesAerolinea, conversorAerolinea, precioUnitarioAerolinea);
					}
					if(precioLatam > 0 && km >0)
					{
						printf("\nPrecio Latam: $%.2f", precioLatam);
						informarResultado(descuentoLatam, interesLatam, conversorLatam, precioUnitarioLatam);
					}
					if(precioAerolinea > 0 && km > 0 && precioLatam > 0){
						printf("\nLa diferencia de precio es : $%.2f\n", diferencia);
					}
				}
			    break;
			case 5:
				km = 7090;
				precioAerolinea= 162965;
				precioLatam= 159339;
			    break;
			case 6:
				break;
			default:
			    printf("Opcion no valida");
			    break;
		}

	}while(menuPrincipa !=6);


	return EXIT_SUCCESS;
}
