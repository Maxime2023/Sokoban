/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** sokoban
*/

#include "../include/header.h"

void    conditions(struct a *c, char *buf)
{
    int u = 0;

    seeking_p(buf, c);
    u = 0;
    while (u <= y_lenght(buf)) {
        mvprintw(0 + u, 0, "%s", c->tab[u]);
        u++;
    }
    c->ch = getch();
    if (c->ch == KEY_DOWN)
        key_down(c, buf);
    if (c->ch == KEY_UP)
        key_up(c);
    if (c->ch == KEY_LEFT)
        key_left(c);
    if (c->ch == KEY_RIGHT)
        key_right(c);
}

void    calling_fonc(char *buf, struct a *c)
{
    contours(buf, c);
    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
}

int    sokoban(char *buf, struct a *c)
{
    calling_fonc(buf, c);
    while (1) {
        conditions (c, buf);
        if (c->ch == 32) {
            refresh();
            sokoban(buf, c);
        }
        if (win(c, buf) == 1) {
            endwin();
            return (0);
        }
        if (losing_conditions(c, buf) == 1) {
            endwin();
            return (1);
        }
    }
    refresh();
    endwin();
    return 0;
}

char    *adding_file(char *a)
{
    struct stat sl;
    int fd;
    char *buf;
    int size;
    struct a *c = malloc(sizeof(struct a *));
    stat(a, &sl);
    if (sl.st_size == 0)
        exit (84);
    buf = malloc(sizeof(char) * (sl.st_size + 1));
    fd = open(a, O_RDONLY);
    if (fd == -1)
        exit (84);
    size = read (fd, buf, sl.st_size);
    buf[size] = '\0';
    close(fd);
    if (bad_conditions(buf) == 1)
        exit (84);
    sokoban(buf, c);
    free(buf);
    return (buf);
}

int    main(int ac, char *av[])
{
    char *d;
    if (ac != 2)
        exit (84);
    if (av[1][0] == '-' && av[1][1] == 'h')
        h_flag();
    d = adding_file(av[1]);
    return (0);
}
