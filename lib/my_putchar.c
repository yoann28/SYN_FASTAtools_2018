/*
** EPITECH PROJECT, 2019
** putchar
** File description:
** putchar
*/

#include "fastatools.h"

void my_putchar(char c)
{
    write(1, &c,  1);
}
