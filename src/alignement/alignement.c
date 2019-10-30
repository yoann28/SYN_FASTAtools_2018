/*
** EPITECH PROJECT, 2019
** nbihdj
** File description:
** dcd
*/

#include "fastatools.h"

void write_dna_alignement_sequences(char *str)
{
    int	i = 0;
    while (str[i]) {
        my_write(str[i]);
        i++;
    }
}

void dna_alignement_sequences(void)
{
    char *str;
    char **arr;
    char **tab;
    int	i = 1;
    str = my_read();
    tab = my_str_to_word_array(str);
    arr = cap_str(tab);
    while (arr[i]) {
        if (my_strcmp(arr[i], ">") == 0) {
            i++;
        } write_dna_alignement_sequences(arr[i]);
        i++;
    } my_putstr("\n");
}
