/*
** EPITECH PROJECT, 2018
** down
** File description:
** down
*/

#include "../include/header.h"

int    key_down_O(struct a *c)
{
    if (c->sO == 1) {
        c->tab[c->y][c->x] = 'O';
        c->tab[c->y + 1][c->x] = 'P';
        c->tab[c->y + 2][c->x] = 'X';
        c->sO = 0;
    }
    else {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y + 1][c->x] = 'P';
        c->tab[c->y + 2][c->x] = 'X';
    }
    return (0);
}

void    key_down_X(struct a *c)
{
    if (c->tab[c->y + 2][c->x] == 'X') {
        c->tab[c->y][c->x] = 'P';
        c->tab[c->y + 1][c->x] = 'X';
        c->tab[c->y + 2][c->x] = 'X';
    }
    if (c->tab[c->y + 2][c->x] == '#') {
        c->tab[c->y + 1][c->x] = 'X';
        c->tab[c->y][c->x] = 'P';
    }
    if (c->tab[c->y + 2][c->x] == 'O') {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y + 1][c->x] = 'P';
        c->tab[c->y + 2][c->x] = 'X';
    }
    if (c->tab[c->y + 2][c->x] == ' ')
        key_down_O(c);
}

void    key_down(struct a *c, char *buf)
{
    if (c->tab[c->y + 1][c->x] == ' ') {
        if (c->sO == 1) {
            c->tab[c->y][c->x] = 'O';
            c->tab[c->y + 1][c->x] = 'P';
            c->sO = 0;
        }
        else {
            c->tab[c->y][c->x] = ' ';
            c->tab[c->y + 1][c->x] = 'P';
        }
    }
    if (c->tab[c->y + 1][c->x] == 'O') {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y + 1][c->x] = 'P';
        c->sO = 1;
    }
    if (c->tab[c->y + 1][c->x] == 'X')
        key_down_X(c);
}
