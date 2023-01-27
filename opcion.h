/**
 * @file opcion.h
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
#if !defined(_WINDOWS_H)
#include <windows.h>
#endif

/**
 * Definimos nuestra macro, esto nos servirá para controlar si la biblioteca esta incluida o no.
 */
#ifndef __OPCION_H__
#define __OPCION_H__

/**
 * @brief 
 * 
 * @param opcion 
 * @return BOOL 
 */
BOOL opcion_correcta_1(int opcion)
{
    switch (opcion)
    {
    case 1:
        return TRUE;
        break;
    case 2:
        return TRUE;
        break;
    case 3:
        return TRUE;
        break;
    case 4:
        return TRUE;
        break;
    default:
        return FALSE;
        break;
    }
}

/**
 * @brief 
 * 
 * @param opcion 
 * @return BOOL 
 */
BOOL opcion_correcta_2(int opcion)
{
    return (opcion == 1 || opcion == 2);
}

#endif // !__OPCION_H__