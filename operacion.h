/**
 * @file operacion.h
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
#if !defined(_GLIBCXX_STDLIB_H)
#include <stdlib.h>
#endif
#if !defined(__INTERFAZ_H__)
#include "interfaz.h"
#endif
#if !defined(__ESTRUCTURA_H__)
#include "estructura.h"
#endif
#if !defined(__OPCION_H__)
#include "opcion.h"
#endif
#if !defined(__LISTA_H__)
#include "lista.h"
#endif

/**
 * @brief
 *
 * @param lista
 */
void operacion_insertar(Lista **lista)
{
    int opcion = 2, edad;
    char nombre[20];

    while (opcion != 1)
    {
        if (opcion_correcta_2(opcion))
        {
            printf("> Agregar Nombre: ");
            scanf("%s", &nombre);

            fgetc(stdin);

            printf("> Agregar Edad: ");
            scanf("%i", &edad);

            Lista *nueva_lista = (Lista *)malloc(sizeof(Lista));
            if (!lista_vacia(nueva_lista))
            {
                strcpy(nueva_lista->datos.nombre, nombre);
                nueva_lista->datos.edad = edad;
                nueva_lista->siguiente = NULL;
                lista_insertar(&*lista, nueva_lista);
            }
            else
            {
                printf(">> No hay espacio suficiente en memoria <<\n");
            }
        }
        else
        {
            printf(">> No existe la opcion ingresada <<\n\n");
        }

        ginsertar_borrar();

        printf("> introducir opcion: ");
        scanf("%i", &opcion);
        system("cls");
    }

    gmenu();
}

/**
 * @brief
 *
 * @param lista
 */
void operacion_mostrar(Lista *lista)
{
    printf("[ -- Lista -- ]\n\n");

    lista_mostrar(lista);

    gmostrar();

    system("pause>nul");
    system("cls");

    gmenu();
}

/**
 * @brief
 *
 * @param lista
 */
void operacion_borrar(Lista **lista)
{
    int opcion = 2, nodo;

    while (opcion != 1)
    {
        if (opcion_correcta_2(opcion))
        {
            printf("[ -- Lista -- ]\n\n");
            if (lista_mostrar(*lista))
            {
                printf("\n> Seleccionar Nodo: ");
                scanf("%i", &nodo);

                printf("\n[ -- Lista -- ]\n\n");
                Lista *aux = lista_seleccionar(*lista, nodo);

                if (!lista_vacia(aux))
                {
                    printf("> [%i] Nombre: %s\n", nodo, aux->datos.nombre);
                    printf("> [%i] Edad: %i\n", nodo, aux->datos.edad);

                    aux = lista_liberar(lista_desenlazar_objetivo(&*lista, aux));

                    if (lista_vacia(aux))
                    {
                        printf(">> El nodo fue eliminado con exito <<\n");
                    }
                    else
                    {
                        printf(">> No se pudo eliminar el nodo <<\n");
                    }
                }
                else
                {
                    printf(">> No existe el nodo seleccionado <<\n");
                }
            }
        }
        else
        {
            printf(">> No existe la opcion ingresada <<\n\n");
        }

        ginsertar_borrar();

        printf("> introducir opcion: ");
        scanf("%i", &opcion);
        system("cls");
    }

    gmenu();
}