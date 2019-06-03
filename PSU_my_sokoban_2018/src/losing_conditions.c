/*
** EPITECH PROJECT, 2018
** lose
** File description:
** lose
*/

#include "../include/header.h"

int    losing_conditions_two(struct a *c, char *buf)
{
    while (c->tab[c->y][c->x] != '\0') {
        if (c->tab[c->y][c->x] == 'X') {
            if (c->tab[c->y - 1][c->x] == '#' &&
                c->tab[c->y][c->x - 1] == '#' ||
                c->tab[c->y + 1][c->x] == '#' &&
                c->tab[c->y][c->x + 1] == '#' ||
                c->tab[c->y + 1][c->x] == '#' &&
                c->tab[c->y][c->x - 1] == '#' ||
                c->tab[c->y - 1][c->x] == '#' &&
                c->tab[c->y][c->x + 1] == '#')
                return (1);
        }
        c->x++;
    }
    c->y++;
    return (0);
}

int    losing_conditions(struct a *c, char *buf)
{
    int x = 0;
    int y = 0;
    int d = 0;

    while (c->y <= y_lenght(buf)) {
        c->x = 0;
        if (losing_conditions_two(c, buf) == 1)
            return (1);
    }
    return (0);
}
