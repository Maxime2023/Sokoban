/*
** EPITECH PROJECT, 2018
** up
** File description:
** up
*/

#include "../include/header.h"

int    key_up_O(struct a *c)
{
    if (c->sO == 1) {
        c->tab[c->y][c->x] = 'O';
        c->tab[c->y - 1][c->x] = 'P';
        c->tab[c->y - 2][c->x] = 'X';
        c->sO = 0;
    }
    else {
    c->tab[c->y][c->x] = ' ';
    c->tab[c->y - 1][c->x] = 'P';
    c->tab[c->y - 2][c->x] = 'X';
    }
    return (0);
}

void    key_up_X(struct a *c)
{
    if (c->tab[c->y - 2][c->x] == 'X') {
        c->tab[c->y][c->x] = 'P';
        c->tab[c->y - 1][c->x] = 'X';
        c->tab[c->y - 2][c->x] = 'X';
    }
    if (c->tab[c->y - 2][c->x] == '#') {
        c->tab[c->y - 1][c->x] = 'X';
        c->tab[c->y][c->x] = 'P';
    }
    if (c->tab[c->y - 2][c->x] == 'O') {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y - 1][c->x] = 'P';
        c->tab[c->y - 2][c->x] = 'X';
    }
    if (c->tab[c->y - 2][c->x] == ' ')
        key_up_O(c);
}

void    key_up(struct a *c)
{
    if (c->tab[c->y - 1][c->x] == ' ') {
        if (c->sO == 1) {
            c->tab[c->y][c->x] = 'O';
            c->tab[c->y - 1][c->x] = 'P';
            c->sO = 0;
        }
        else {
            c->tab[c->y][c->x] = ' ';
            c->tab[c->y - 1][c->x] = 'P';
        }
    }
    if (c->tab[c->y - 1][c->x] == 'O') {
        c->winn++;
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y - 1][c->x] = 'P';
        c->sO = 1;
    }
    if (c->tab[c->y - 1][c->x] == 'X')
        key_up_X(c);
}
