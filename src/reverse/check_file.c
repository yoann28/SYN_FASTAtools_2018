/*
** EPITECH PROJECT, 2018
** SYN_FASTAtools_2017
** File description:
** data
*/

#include "fastatools.h"

char **read_file(void)
{
    int i = 0;
    int a;
    char *str = NULL;
    char **array = malloc(sizeof(char *) * 1000);
    size_t len = 0;
    while (1) {
        a = getline(&str, &len, stdin);
        if (a == -1) {
            array[i] = NULL;
            break;
        } array[i] = my_strdup(str);
        i++;
    } return (array);
}

char *capitalize_string(char *str)
{
    int i = 0;
    int j = 0;
    char *array = malloc(sizeof(char) * (my_strlen(str) + 1));
    while (str[i] != '\0') {
        if (str[i] == 97 || str[i] == 116 || str[i] == 103
        || str[i] == 99 || str[i] == 110) {
            array[j] = str[i] - 32;
            j++;
        } else if (str[i] == 65 || str[i] == 84 || str[i] == 71
        || str[i] == 67 || str[i] == 78) {
            array[j] = str[i];
            j++;
        } i++;
    } array[j] = '\0';
    return (array);
}

void clean_str(char **file)
{
    int i = 0;
    int j;
    while (file[i] != NULL) {
        if (my_strchr(file[i], 62) == NULL) {
            j = i;
            while (file[i + 1] != NULL &&
            my_strchr(file[i + 1], 62) == NULL) {
                file[i + 1] =
                my_strcat_dup(file[i],
                my_strdup(file[i + 1]));
                file[i] = "\0";
                i++;
            } i = j;
            file[i] = capitalize_string(file[i]);
        } i++;
    }
}

void free_str(char **str)
{
    int i = 0;
    while (str[i] != NULL) {
        free(str[i]);
        i++;
    } free(str);
}
