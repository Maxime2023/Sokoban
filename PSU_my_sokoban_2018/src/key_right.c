/*
** EPITECH PROJECT, 2018
** right
** File description:
** right
*/

#include "../include/header.h"

int    key_right_O(struct a *c)
{
    if (c->sO == 1) {
        c->tab[c->y][c->x] = 'O';
        c->tab[c->y][c->x + 1] = 'P';
        c->tab[c->y][c->x + 2] = 'X';
        c->sO = 0;
    }
    else {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y][c->x + 1] = 'P';
        c->tab[c->y][c->x + 2] = 'X';
    }
    return (0);
}

void    key_right_X(struct a *c)
{
    if (c->tab[c->y][c->x + 2] == 'X') {
        c->tab[c->y][c->x] = 'P';
        c->tab[c->y][c->x + 1] = 'X';
        c->tab[c->y][c->x + 2] = 'X';
    }
    if (c->tab[c->y][c->x + 2] == '#') {
        c->tab[c->y][c->x + 1] = 'X';
        c->tab[c->y][c->x] = 'P';
    }
    if (c->tab[c->y][c->x + 2] == 'O') {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y][c->x + 1] = 'P';
        c->tab[c->y][c->x + 2] = 'X';
    }
    if (c->tab[c->y][c->x + 2] == ' ')
        key_right_O(c);
}

void    key_right(struct a *c)
{
    if (c->tab[c->y][c->x + 1] == ' ') {
        if (c->sO == 1) {
            c->tab[c->y][c->x] = 'O';
            c->tab[c->y][c->x + 1] = 'P';
            c->sO = 0;
        }
        else {
            c->tab[c->y][c->x] = ' ';
            c->tab[c->y][c->x + 1] = 'P';
        }
    }
    if (c->tab[c->y][c->x + 1] == 'O') {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y][c->x + 1] = 'P';
        c->sO = 1;
    }
    if (c->tab[c->y][c->x + 1] == 'X')
        key_right_X(c);
}
