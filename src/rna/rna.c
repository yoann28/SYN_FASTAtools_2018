/*
** EPITECH PROJECT, 2018
** SYN_FASTAtools_2017
** File description:
** rna
*/

#include "fastatools.h"

void check_rna(int c)
{
    if (c == 'a' || c == 'g' || c == 'c' || c == 'n') {
        c -= 32;
        write(1, &c, 1);
    } else if (c == 'A' || c == 'G' || c == 'C' || c == 'N')
        write(1, &c, 1);
    else if (c == 't' || c == 'T')
        write(1, "U", 1);
}

void rna(void)
{
    int c;
    int a = 0;
    while (1) {
        c = getc(stdin);
        if (c == EOF) {
            write(1, "\n", 1);
            break;
        } if (c == '>')
            a = print(c, a);
        check_rna(c);
    }
}
