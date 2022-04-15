/*
 * calculo.h
 *
 *  Created on: Apr 4, 2022
 *      Author: advalos
 */
/**
 * @brief imprime por pantalla un menu con seleccion de una opcion
 * @param opcionElegida puntero , donde guarda la opcion seleccionada
 */
void imprimirMenu(int *opcionElegida);
/**
 * @brief imprime por pantalla un menu con seleccion de una opcion
 * @param opcionElegidaSubMenu puntero, donde guarda la opcion seleccionada
 */
void imprimirSubMenu(int *opcionElegidaSubMenu);
/**
 * @brief solita el kilometro al usuario
 * @param km puntero, donde guarda los kilometros ingresados
 */
void obtenerKm(int* km);
/**
 * @brief solicita el precio al usuario
 * @param precio puntero, donde guarda el precio ingresado
 */
void obtenerPrecio(float *precio);
/**
 * @brief asigna valor ya establecidos
 * @param km puntero, donde guarda los kilometros
 * @param precioAerolinea puntero, donde guarda el precio de Aerolineas
 * @param precioLatam puntero, donde guarda el precio de Latam
 */
void setearValoresCargaForzada(int *km, float *precioAerolinea, float *precioLatam);
/**
 * @brief imprime los calculos que realiza
 */
void imprimirCalculosARealizar(void);
/**
 * @brief calcula un descuento del 10%
 * @param precio recibe el valor a la cual se le aplica el descuento
 * @param *descuento puntero, donde guarda el valor calculado
 */
void tarjetaDebito(float precio, float *descuento);
/**
 * @brief calcula un recargo del 25%
 * @param precio recibe el valor a la cual se le aplica el recargo
 * @param *interes puntero, donde guarda el valor calculado
 */
void tarjetaDeCredito(float precio, float *interes);
/**
 * @brief calcula el equivalente de pesos a bitcoin
 * @param precio recibe el valor a la cual se le calcula el equivalente
 * @param *conversor puntero, donde guarda el valor calculado
 */
void bitcoin(float precio, float *conversor);
/**
 * @brief calcula el precio por km
 * @param precio recibe el valor a la cual se le calcula el precio por km
 * @param *precioUnitario puntero, donde guarda el valor calculado
 */
void precioPorKm(float precio, int km, float *precioUnitario);
/**
 * @brief calcula la diferencia entre dos valores
 * @param precioAerolinea recibe el primer valor
 * @param precioLatam recibe el segundo valor
 * @param *diferencia puntero, donde guarda el valor calculado
 */
void diferenciaDePrecio( float precioAerolinea, float precioLatam, float *diferencia);
/**
 * @brief recibe los parametros para hacer calculo sobre tarjetaDebito,tarjetaDeCredito,bitcoin,precioPorKm
 * @param precio recibe el valor sobre el cual se realizan los calculos
 * @param km recibe los kilometros sobre el cual se realizan los calculos
 * @param *descuento puntero, donde guarda el valor calculado
 * @param *interes puntero, donde guarda el valor calculado
 * @param *conversor puntero, donde guarda el valor calculado
 * @param *precioUnitario puntero, donde guarda el valor calculado
 */
void hacerCalculos(float precio, int km, float *descuento, float *interes, float *conversor, float *precioUnitario);
/**
 * @brief informa los resultados pagando con tarjeta de debito, credito, bitcoin y el precio unitario
 * @param descuento recibe el valor obtenido pagando con tarjeta de debito
 * @param interes recibe el valor obtenido pagando con tarjeta de credito
 * @param conversor recibe el valor obtenido pagando con bitcoin
 * @param precioUnitario recibe el valor por cada un kilometro
 */
void imprimirResultado(float descuento, float interes,  float conversor,float precioUnitario);
#ifndef CALCULO_H_
#define CALCULO_H_


#endif /* CALCULO_H_ */
