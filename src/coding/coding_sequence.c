/*
** EPITECH PROJECT, 2019
** nbihdj
** File description:
** dcd
*/

#include "fastatools.h"

int check_codon_stop(char *str, int i)
{
    if (str[i] == 'T' && str[i + 1] == 'A' && str[i + 2] == 'A')
        return (0);
    if (str[i] == 'T' && str[i + 1] == 'A' && str[i + 2] == 'G')
        return (0);
    if (str[i] == 'T' && str[i + 1] == 'G' && str[i + 2] == 'A')
        return (0);
    return (1);
}

void write_molecules(char c)
{
    if (c == 'A' || c == 'T' || c == 'G' || c == 'C' || c == 'N')
        write(1, &c, 1);
    else
        return ;
}

void write_coding_sequences(char *str)
{
    int	i = 0;
    while (str[i]) {
        if (str[i] == 'A' && str[i + 1] == 'T'
            && str[i + 2] == 'G') {
            my_putstr("ATG");
            i = i + 3;
            while (check_codon_stop(str, i) == 1 && str[i]) {
                write_molecules(str[i]);
                i++;
            } my_putstr("\n");
            i++;
        } i++;
    }
}

void coding_sequences(void)
{
    char *str;
    char **arr;
    char **tab;
    int	i = 1;
    str = my_read();
    tab = my_str_to_word_array(str);
    arr = cap_str(tab);
    while (arr[i]) {
        if (my_strncmp(arr[i], ">", 1) == 0)
            i++;
        else
            write_coding_sequences(arr[i]);
        i++;
    }
}
