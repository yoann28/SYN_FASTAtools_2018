/*
** EPITECH PROJECT, 2019
** usage
** File description:
** usage
*/

#include "fastatools.h"

void usage(char *av)
{
    my_putstr("USAGE\n");
    my_putstr("\t");
    my_putstr(av);
    my_putstr(" option\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\toption 1: read FASTA from the standard input, ");
    my_putstr("write the DNA sequences to the\n");
    my_putstr("\t\tstandard output\n");
    my_putstr("\toption 2: read FASTA from the standard input, write ");
    my_putstr("the RNA sequences to the\n");
    my_putstr("\t\tstandard output\n");
    my_putstr("\toption 3: read FASTA from the standard input, write ");
    my_putstr("the reverse complement\n");
    my_putstr("\t\tto the standard output\n");
    my_putstr("\toption 4: read FASTA from the standard input, write the ");
    my_putstr("k-mer list to the\n");
    my_putstr("\t\tstandard output\n");
    my_putstr("\toption 5: read FASTA from the standard input, write the ");
    usage1();
}

void usage1(void)
{
    my_putstr("coding sequences\n");
    my_putstr("\t\tlist to the standard output\n");
    my_putstr("\toption 6: read FASTA from the standard input, write the ");
    my_putstr("amino acids list to\n");
    my_putstr("\t\tthe standard output\n");
    my_putstr("\toption 7: read FASTA from the standard input containing ");
    my_putstr("exactly 2 squences, \n");
    my_putstr("\t\talign them and write the result to the standard output\n");
    my_putstr("\tk: size of the k-mers for option 4\n");
}
