/*
** EPITECH PROJECT, 2018
** p
** File description:
** p
*/

#include "../include/header.h"

int    *seeking_p(char *buf, struct a *c)
{
    int a = 0;
    int b = 0;
    int *pos_p = malloc(sizeof(int) * 4);
    int sO = 0;

    while (a <= y_lenght(buf)) {
        b = 0;
        while (b <= c->f) {
            if (c->tab[a][b] == 'P') {
                c->x = b;
                c->y = a;
            }
            b++;
        }
        a++;
    }
    return (0);
}
