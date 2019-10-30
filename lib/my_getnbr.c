/*
** EPITECH PROJECT, 2019
** get
** File description:
** nbr
*/

#include "fastatools.h"

int my_getnbr(char *str)
{
    int i;
    int nbr = 0;
    if (str[0] == '\0')
        return (-1);
    if (str[0] && str[0] == 45)
        return (-1);
    i = 0;
    while (str[i] != '\0') {
        if (str[i] < 48 || str[i] > 57)
            return (-1);
        nbr += str[i] - 48;
        nbr *= 10;
        i++;
    } nbr /= 10;
    return (nbr);
}
