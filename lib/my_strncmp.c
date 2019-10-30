/*
** EPITECH PROJECT, 2019
** str
** File description:
** ncmp
*/

#include "fastatools.h"

int my_strncmp(const char *str1, const char *str2, int  n)
{
    int i;
    if (n == 0)
        return (0);
    i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
        ++i;
    return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
