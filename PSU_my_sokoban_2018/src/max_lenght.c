/*
** EPITECH PROJECT, 2018
** max
** File description:
** max
*/

#include "../include/header.h"

void    max_lenght(char *buf, struct a *c)
{
    int d = 0;
    int e = 0;

    while (buf[d] != '\0') {
        while (buf[d] != '\n') {
            e++;
            d++;
        }
        if (c->f <= e)
            c->f = e;
        d++;
        e = 0;
    }
}
