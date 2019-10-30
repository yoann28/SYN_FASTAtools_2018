/*
** EPITECH PROJECT, 2019
** data
** File description:
** data
*/

#include "fastatools.h"

int print(int c, int a)
{
    if (a != 0)
        write (1, "\n", 1);
    a++;
    write(1, &c, 1);
    while (c != 10) {
        c = getc(stdin);
        write(1, &c, 1);
    } return (a);
}
