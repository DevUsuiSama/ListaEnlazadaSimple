/**
 * @file manejo_de_lista.c
 * @author DevUsuiSama (joesesilvae@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdafx.h"

int main()
{
    int opcion = 0;
    Lista *lista = NULL;

    SetConsoleTitle("Manejo de Lista Enlazada Simple");
    system("color 0b");
    gmenu();

    while (opcion != 4)
    {
        printf("> introducir opcion: ");
        scanf("%i", &opcion);
        
        system("cls");

        if (opcion_correcta_1(opcion))
        {
            switch (opcion)
            {
            case 1:
                system("cls");
                operacion_insertar(&lista);
                break;
            case 2:
                system("cls");
                operacion_mostrar(lista);
                break;
            case 3:
                system("cls");
                operacion_borrar(&lista);
                break;
            default:
                break;
            }
        }
        else
        {
            printf(">> No existe la opcion ingresada <<\n\n");
        }
    }
    /**
     * Liberamos el espacio de memoria que ocupamos durante la creación de la lista.
     * Paso muy importante para no tener la famosa fuga de memoria,
     * que es básicamente una porción de memoria que permanece reservada
     * pero inaccesible.
     */ 
    lista = lista_liberar(lista);

    // Controlamos que la lista este vacía.
    if (lista_vacia(lista))
    {
        printf(">> La lista esta vacia <<\n");
    }
    else
    {
        printf(">> La lista no esta vacia <<\n");
    }

    system("pause");

    return EXIT_SUCCESS;
}