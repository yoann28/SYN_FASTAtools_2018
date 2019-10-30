/*
** EPITECH PROJECT, 2019
** str
** File description:
** eses
*/

#include "fastatools.h"

char *my_strcat_dup(char *dest, char const *src)
{
    int str[4] = {0, 0, 0, 0};
    char *string = dest;
    str[0] = my_strlen(dest);
    str[1] = my_strlen(src);
    dest = malloc(sizeof(char) * (str[0] + str[1] + 2));
    str[2] = 0;
    while (str[2] < str[0]) {
        dest[str[2]] = string[str[2]];
        str[2]++;
    } str[3] = 0;
    while (src[str[3]] != 0) {
        dest[str[3] + str[0]] = src[str[3]];
        str[3]++;
    } dest[str[0] + str[3]] = '\0';
    return (dest);
}
