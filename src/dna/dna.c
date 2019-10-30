/*
** EPITECH PROJECT, 2019
** dna
** File description:
** dna
*/

#include "fastatools.h"

void check_dna(int c)
{
    if (c == 'a' || c == 't' || c == 'g' || c == 'c' || c == 'n') {
        c -= 32;
        write(1, &c, 1);
    } else if (c == 'A' || c == 'T' || c == 'G' || c == 'C' || c == 'N')
        write(1, &c, 1);
}

void dna(void)
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
        check_dna(c);
    }
}
