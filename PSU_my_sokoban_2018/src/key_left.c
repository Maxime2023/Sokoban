/*
** EPITECH PROJECT, 2018
** left
** File description:
** left
*/

#include "../include/header.h"

int    key_left_O(struct a *c)
{
    if (c->sO == 1) {
        c->tab[c->y][c->x] = 'O';
        c->tab[c->y][c->x - 1] = 'P';
        c->tab[c->y][c->x - 2] = 'X';
        c->sO = 0;
    }
    else {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y][c->x - 1] = 'P';
        c->tab[c->y][c->x - 2] = 'X';
        }
    return (0);
}

void    key_left_X(struct a *c)
{
    if (c->tab[c->y][c->x - 2] == 'X') {
        c->tab[c->y][c->x] = 'P';
        c->tab[c->y][c->x - 1] = 'X';
        c->tab[c->y][c->x - 2] = 'X';
    }
    if (c->tab[c->y][c->x - 2] == '#') {
        c->tab[c->y][c->x - 1] = 'X';
        c->tab[c->y][c->x] = 'P';
    }
    if (c->tab[c->y][c->x - 2] == 'O') {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y][c->x - 1] = 'P';
        c->tab[c->y][c->x - 2] = 'X';
    }
    if (c->tab[c->y][c->x - 2] == ' ')
        key_left_O(c);
}

void    key_left(struct a *c)
{
    if (c->tab[c->y][c->x - 1] == ' ') {
        if (c->sO == 1) {
            c->tab[c->y][c->x] = 'O';
            c->tab[c->y][c->x - 1] = 'P';
            c->sO = 0;
        }
        else {
            c->tab[c->y][c->x] = ' ';
            c->tab[c->y][c->x - 1] = 'P';
        }
    }
    if (c->tab[c->y][c->x - 1] == 'O') {
        c->tab[c->y][c->x] = ' ';
        c->tab[c->y][c->x - 1] = 'P';
        c->sO = 1;
    }
    if (c->tab[c->y][c->x - 1] == 'X')
        key_left_X(c);
}
