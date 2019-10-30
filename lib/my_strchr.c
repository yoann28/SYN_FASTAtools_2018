/*
** EPITECH PROJECT, 2019
** str
** File description:
** chr
*/

#include "../include/fastatools.h"

char	*my_strchr(const char *s, char c)
{
    int i;
    i = 0;
    if (s == NULL)
        return (NULL);
    while (s[i]) {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    } if (s[i] == (char)c)
        return ((char *)&s[i]);
    return (NULL);
}
