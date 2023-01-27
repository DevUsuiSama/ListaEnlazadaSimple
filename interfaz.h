/**
 * @file interfaz.h
 * @author DevUsuiSama (joesesilvae@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * Si el macro no está definido significa que la biblioteca no se incluyo.
 * Si la condición declarada es verdadera se incluye la biblioteca.
 */
#if !defined(_STDIO_H)
#include <stdio.h>
#endif

/**
 * Definimos nuestra macro, esto nos servirá para controlar si la biblioteca esta incluida o no.
 */
#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

/**
 * Mostramos en consola las opciones disponibles.
 */

void gmenu()
{
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("> [1]: insertar nodo\n");
    printf("> [2]: mostrar nodos\n");
    printf("> [3]: borrar nodo\n");
    printf("> [4]: salir\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
}

void ginsertar_borrar()
{
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("> Presionar [1] para salir o [2] para continuar...\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
}

void gmostrar()
{
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("> Presionar cualquier tecla para salir...\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
}

#endif // !__INTERFAZ_H__