/**
 * @file lista.h
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
#if !defined(_WINDOWS_H)
#include <windows.h>
#endif
#if !defined(__ESTRUCTURA_H__)
#include "estructura.h"
#endif

/**
 * Definimos nuestra macro, esto nos servirá para controlar si la biblioteca esta incluida o no.
 */
#ifndef __LISTA_H__
#define __LISTA_H__

/**
 * @brief
 *
 * @param lista
 * @return BOOL
 */
BOOL lista_vacia(Lista *lista)
{
    return (lista == NULL);
}

/**
 * @brief
 *
 * @param lista
 * @return Lista*
 */
Lista *lista_ir_hasta_el_ultimo_nodo(Lista *lista)
{
    while (!lista_vacia(lista->siguiente))
    {
        lista = lista->siguiente;
    }
    return lista;
}

/**
 * @brief
 *
 * @param lista
 * @param nueva_lista
 */
void lista_insertar(Lista **lista, Lista *nueva_lista)
{
    if (lista_vacia(*lista))
    {
        *lista = nueva_lista;
    }
    else
    {
        Lista *aux = lista_ir_hasta_el_ultimo_nodo(*lista);
        aux->siguiente = nueva_lista;
    }
}

/**
 * @brief 
 * 
 * @param lista 
 * @return BOOL 
 */
BOOL lista_mostrar(Lista *lista)
{
    int cont = 1;
    Lista *aux = lista;

    if (lista_vacia(aux))
    {
        printf("> La lista esta vacia\n");
        return FALSE;
    }
    else
    {
        while (!lista_vacia(aux))
        {
            printf("> [%i] Nombre: %s\n", cont, aux->datos.nombre);
            printf("> [%i] Edad: %i\n", cont, aux->datos.edad);
            aux = aux->siguiente;
            cont++;
        }
        return TRUE;
    }
}

/**
 * @brief
 *
 * @param nodo
 * @return Lista*
 */
Lista *lista_seleccionar(Lista *lista, int nodo)
{
    int cont = 1;
    Lista *aux = lista;

    while (!lista_vacia(aux))
    {
        if (cont == nodo)
        {
            return aux;
        }
        else
        {
            aux = aux->siguiente;
            cont++;
        }
    }

    return NULL;
}

/**
 * @brief
 *
 * @param lista
 * @return Lista*
 */
Lista *lista_desenlazar(Lista **lista)
{
    Lista *aux = *lista;

    if (!lista_vacia(aux))
    {
        *lista = (*lista)->siguiente;
        aux->siguiente = NULL;
    }
    return aux;
}

/**
 * @brief
 *
 * @param lista
 * @param objetivo
 * @return Lista*
 */
Lista *lista_desenlazar_objetivo(Lista **lista, Lista *objetivo)
{
    Lista *anterior = NULL, *siguiente, *aux = *lista;

    while (!lista_vacia(aux))
    {
        if (aux == objetivo)
        {
            siguiente = aux->siguiente;
            if (!lista_vacia(anterior))
            {
                anterior->siguiente = siguiente;
            }
            else
            {
                *lista = siguiente;
            }
            aux->siguiente = NULL;
            break;
        }
        else
        {
            anterior = aux;
            aux = aux->siguiente;
        }
    }
    return aux;
}

/**
 * @brief
 *
 * @param lista
 * @return Lista*
 */
Lista *lista_liberar(Lista *lista)
{
    while (!lista_vacia(lista))
    {
        free(lista_desenlazar(&lista));
    }
    return lista;
}

#endif // !__LISTA_H__