/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

char *save_text(int fd, char *filepath)
{
    int i = 0;
    int size = 0;
    long max_size = 0;
    char *arraytext;

    size = 30000;
    arraytext = malloc(sizeof(char) * size + 1);
    my_memset(arraytext, '\0', size + 1);
    read(fd, arraytext, size);
    return (arraytext);
}

int quantity_sentences(int size_text, char *str, char delimiter)
{
    int i = 1;
    int num_sentences = 1;

    while (i < size_text) {
        if (str[i] == delimiter || str[i] == '\0')
            num_sentences++;
        i++;
    } return (num_sentences);
}

int len_sentence(char *arraytext, char delimiter)
{
    int i = 0;
    while (arraytext[i] != '\0' && arraytext[i] != delimiter)
        i++;
    return (i);
}

char **save_word(char *arraytext, char separator, char *filepath)
{
    int len = 0;
    int i = 0;
    int k = 0;
    int j = 0;
    char **sentences;

    sentences = my_calloc(quantity_sentences(my_strlen(arraytext),
    arraytext, '\n') * 2, sizeof(char *));
    while (i < my_strlen(arraytext)) {
        len = len_sentence(arraytext, separator);
        sentences[j] = my_calloc(len * 2 + 10, sizeof(char));
        k = 0;
        while (arraytext[i] != separator && arraytext[i] != '\0' &&
        arraytext[i] != '\n')
            sentences[j][k++] = arraytext[i++];
        j++;
        i++;
    }
    sentences[j] = NULL;
    return (sentences);
}
