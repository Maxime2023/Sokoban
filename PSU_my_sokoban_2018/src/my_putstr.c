/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** Task02
*/

#include "../include/header.h"

void    my_putchar(char c)
{
    write (1, &c, 1);
}

char    *my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}
