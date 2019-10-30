/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** palindrome
*/

#ifndef FASTATOOLs_H_
#define FASTATOOLs_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct data_s {
    int option;
    int size_kmers;
} data_t;

void usage(char *av);
void usage1(void);
void error(char **av);
int main(int ac, char **av);
void reverse_and_change_str(char *str);
char *my_read(void);
void reverse_complement(void);
void change1(char *str, int c, int len);
void change2(char *str, int c, int len);
void write_dna_alignement_sequences(char *str);
void dna_alignement_sequences(void);
char **read_file(void);
char *capitalize_string(char *str);
void clean_str(char **file);
void free_str(char **data);
int print(int c, int a);
void check_dna(int c);
void dna(void);
void check_rna(int c);
void rna(void);
void fastatools(int ac, data_t *data);
void fastatools1(data_t *data);
void fastatools2(data_t *data);
void fastatools3(data_t *data);
char *my_read_();
int  check_codon_stop(char *str, int i);
void my_write(char c);
void write_coding_sequences(char *str);
char **cap_str(char **str);
void coding_sequences();

void my_putchar(char c);
void my_putstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_getnbr(char *str);
char *my_strcat_dup(char *dest, char const *src);
char *my_strdup(char *src);
int my_strlen(char const *str);
char	*my_strchr(const char *s, char c);
char **my_str_to_word_array(char const *str);
char *my_strcapitalize(char *str);
int my_strncmp(const char *str1, const char *str2, int  n);

#endif
