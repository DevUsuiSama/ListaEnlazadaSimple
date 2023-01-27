/**
 * @file estructura.h
 * @author DevUsuiSama (joesesilvae@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * Definimos nuestra macro, esto nos servirá para controlar si la biblioteca esta incluida o no.
 */
#ifndef __ESTRUCTURA_H__
#define __ESTRUCTURA_H__

/**
 * Estructuras, nos servirá para crear la lista enlazada simple.
 */

typedef struct SDatos
{
    char nombre[20];
    int edad;
} Datos;

typedef struct SLista
{
    Datos datos;
    struct SLista *siguiente;
} Lista;

#endif // !__ESTRUCTURA_H__