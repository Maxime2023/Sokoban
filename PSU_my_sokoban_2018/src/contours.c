/*
** EPITECH PROJECT, 2018
** contours
** File description:
** contous
*/

#include "../include/header.h"

int    map_opening(struct a *c, char *buf)
{
    int x = 0;
    int y = 0;

    while (y <= y_lenght(buf)) {
        x = 0;
        while (c->tab[y][x] != '\0') {
            x++;
        }
        if (c->tab[y][x - 1] != '#')
            exit (84);
        y++;
    }
}

int    map_opening_two(struct a *c, char *buf)
{
    int x = 0;
    int y = 0;

    while (y <= y_lenght(buf)) {
        x = 0;
        while (c->tab[y][x] != '\0') {
            x++;
        }
        if (c->tab[y][0] != '#')
            exit (84);
        y++;
    }
}

int    bad_caracter(struct a *c, char *buf)
{
    int x = 0;
    int y = 0;
    int d = 0;

    while (buf[d] != '\0') {
        if (buf[d] == 'X' || buf[d] == '#' || buf[d] == 'O' ||
            buf[d] == 'P' || buf[d] == '\n' || buf[d] == ' ')
            y = 0;
        else
            exit (84);
        d++;
    }
    return (0);
}

void    sending_maps(struct a *c, char *buf)
{
    bad_caracter(c, buf);
}

void    contours(char *buf, struct a *c)
{
    int x = 0;
    int u = 0;
    int d = 0;

    c->tab = malloc(sizeof(char *) * (y_lenght(buf)));
    for (int b = 0; b <= y_lenght(buf); b++)
        c->tab[b] = malloc(sizeof(char) * (c->f) + 1);
    while (buf[d] != '\0') {
        if (buf[d] == '\n') {
            c->tab[u][x] = '\0';
            u++;
            x = 0;
            d++;
        }
        c->tab[u][x] = buf[d];
        x++;
        d++;
    }
    c->tab[u][x] = '\0';
    sending_maps(c, buf);
}
