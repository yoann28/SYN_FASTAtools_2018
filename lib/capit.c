/*
** EPITECH PROJECT, 2019
** cap
** File description:
** cap
*/

#include "fastatools.h"

char **cap_str(char **str)
{
    char **arr;
    int	i = 0;
    int	j = 0;
    int	a = 0;
    while (str[a])
        a++;
    arr = malloc(sizeof(char *) * (a + 1));
    while (str[i]) {
        arr[j] = malloc(sizeof(char) * 2048);
        if (my_strncmp(str[i], ">", 1) == 0)
            arr[j++] = str[i++];
        arr[j] = my_strcapitalize(str[i]);
        i++;
        j++;
    } return (arr);
}
