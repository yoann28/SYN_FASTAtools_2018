/*
** EPITECH PROJECT, 2019
** fasta
** File description:
** fasta
*/

#include "fastatools.h"

void fastatools(int ac, data_t *data)
{
    if (ac == 2) {
        if (data->option == 1) {
            dna();
            exit(0);
        } fastatools3(data);
        if (data->option == 2) {
            rna();
            exit(0);
        } else
            exit (84);
        fastatools1(data);
    } else if (ac == 3)
        fastatools2(data);
}

void fastatools1(data_t *data)
{
    if (data->option == 7) {
        dna_alignement_sequences();
        exit(0);
    } if (data->option == 5) {
        coding_sequences();
        exit(0);
    } if (data->option == 6) {
        exit(0);
    }
}

void fastatools2(data_t *data)
{
    if (data->option == 4) {
        exit(0);
    } else
        exit (84);
}

void fastatools3(data_t *data)
{
    if (data->option == 3) {
        reverse_complement();
        exit(0);
    }
}
