/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#include "fastatools.h"

void my_write(char c)
{
    if (c == 'A' || c == 'T' || c == 'G' || c == 'C' || c == 'N')
        write(1, &c, 1);
    else
        return ;
}
