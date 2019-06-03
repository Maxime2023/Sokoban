/*
** EPITECH PROJECT, 2018
** win
** File description:
** win
*/

#include "../include/header.h"

int    win(struct a *c, char *buf)
{
    int a = 0;
    int b = 0;
    int d = 1;

    while (a <= y_lenght(buf)) {
        b = 0;
        while (c->tab[a][b] != '\0') {
            if (c->tab[a][b] == 'O')
                return (0);
            b++;
        }
        a++;
    }
    if (c->sO == 1)
        return (0);
    return (d);
}
