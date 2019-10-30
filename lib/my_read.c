/*
** EPITECH PROJECT, 2019
** read
** File description:
** read
*/

#include "fastatools.h"

char *my_read(void)
{
    char *str;
    str = malloc(sizeof(char) * 100000);
    if (read(0, str, 100000) <= 0)
        exit(0);
    if (!str) {
        my_putstr("Invalid argument\n");
        exit (84);
    } return (str);
}
