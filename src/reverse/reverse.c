/*
** EPITECH PROJECT, 2019
** reverse
** File description:
** complemtn
*/

#include "fastatools.h"

void reverse_and_change_str(char *str)
{
    int len = my_strlen(str) - 1;
    int c;
    int i = 0;
    char *dup = my_strdup(str);
    while (len >= 0) {
        c = dup[i];
        change1(str, c, len);
        i++;
        len--;
    } my_putstr(str);
    free(dup);
}

void reverse_complement(void)
{
    int i = 0;
    int a = 0;
    char **str = read_file();
    clean_str(str);
    while (str[i] != NULL) {
        if (str[i][0] != '\0' && my_strchr(str[i], 62) != NULL) {
            if (a != 0)
                my_putstr("\n");
            my_putstr(str[i]);
            a++;
        } else
            //reverse_and_change_str(str[i]);
        i++;
    } my_putstr("\n");
    free_str(str);
}

void change1(char *str, int c, int len)
{
    if (c == 'A')
        str[len] = 'T';
    else if (c == 'T')
        str[len] = 'A';
    change2(str, c, len);
}

void change2(char *str, int c, int len)
{
    if (c == 'C')
        str[len] = 'G';
    else if (c == 'G')
        str[len] = 'C';
}
