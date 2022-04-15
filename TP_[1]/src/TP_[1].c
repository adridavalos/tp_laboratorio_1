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
	int opcionElegida;
	int opcionElegidaSubMenu;
	int km=0;
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
		imprimirMenu(&opcionElegida);

		switch (opcionElegida)
		{
			case 1:
				obtenerKm(&km);
			    break;
			case 2:
				imprimirSubMenu(&opcionElegidaSubMenu);

				switch (opcionElegidaSubMenu)
				{
				    case 1:
				    	obtenerPrecio(&precioAerolinea);
				        break;
				    case 2:
					    obtenerPrecio(&precioLatam);
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
					imprimirCalculosARealizar();
				}


			    break;
			case 4:

				if(precioAerolinea == 0 && km == 0 && precioLatam == 0)
				{
						printf("\nError vuelva a ingresar los datos\n");
				}else{
					if(km > 0)
					{
						printf("\nKMs ingresado: %dkm\n",km);
					}
					if(precioAerolinea > 0 && km > 0)
					{
						printf("\nPrecio Aerolineas: $%.2f", precioAerolinea);
						imprimirResultado(descuentoAerolinea, interesAerolinea, conversorAerolinea, precioUnitarioAerolinea);
					}
					if(precioLatam > 0 && km >0)
					{
						printf("\nPrecio Latam: $%.2f", precioLatam);
						imprimirResultado(descuentoLatam, interesLatam, conversorLatam, precioUnitarioLatam);
					}
					if(precioAerolinea > 0 && km > 0 && precioLatam > 0){
						printf("\nLa diferencia de precio es : $%.2f\n", diferencia);
					}
				}
			    break;
			case 5:
				setearValoresCargaForzada(&km,&precioAerolinea,&precioLatam);
			    break;
			case 6:
				break;
			default:
			    printf("Opcion no valida");
			    break;
		}

	}while(opcionElegida !=6);


	return EXIT_SUCCESS;
}
