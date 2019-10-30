/*
** EPITECH PROJECT, 2018
** SYN_FASTAtools_2017
** File description:
** main
*/

#include "fastatools.h"

int main(int ac, char **av)
{
    data_t data;
    if (ac == 1 || ac < 2 || ac > 3)
        return (84);
    if (my_strcmp("-h", av[1]) == 1 && my_strcmp("1", av[1]) == 1
    && my_strcmp("2", av[1]) == 1 && my_strcmp("3", av[1]) == 1
    && my_strcmp("4", av[1]) == 1 && my_strcmp("5", av[1]) == 1
    && my_strcmp("6", av[1]) == 1 && my_strcmp("7", av[1]) == 1) {
        my_putstr("bad arguments\n");
        exit (84);
    } error(av);
    data.option = my_getnbr(av[1]);
    if (data.option < 1 && data.option > 7)
        exit (84);
    fastatools(ac, &data);
    return (0);
}

void error(char **av)
{
    if (my_strcmp("-h", av[1]) == 0)
        usage(av[0]);
}
