/*
** EPITECH PROJECT, 2018
** header
** File description:
** header
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <stdio.h>
#include <string.h>

#ifndef HEADER_H_
#define HEADER_H_


typedef struct a
{
    int x;
    int y;
    char **tab;
    int ch;
    int sO;
    int f;
    int sA;
    int sB;
    int sC;
    int winn;
    
    
} c;

int    x_lenght(char *buf);
void    max_lenght(char *buf, struct a *c);
int    y_lenght(char *buf);
char    **tab_mal(char *buff, struct a *c);
char    *my_putstr(char const *str);
void    key_down(struct a *c, char *buf);
void  	key_up(struct a *c);
void  	key_left(struct a *c);
void  	key_right(struct a *c);
char    *h_flag(void);
int    counting_o(char *buf);
void    contours(char *buf, struct a *c);
int    win(struct a *c, char *buf);
int    *seeking_p(char *buf, struct a *c);
int    bad_conditions(char * buf);
int    finding_coins(struct a *c, char *buf);
int    losing_conditions(struct a *c, char *buf);

#endif
