/*
** EPITECH PROJECT, 2019
** str
** File description:
** capitalize
*/

#include "fastatools.h"

char *my_strcapitalize(char *str)
{
    int	i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    } return (str);
}
