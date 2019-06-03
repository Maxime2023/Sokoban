/*
** EPITECH PROJECT, 2018
** counting
** File description:
** counting
*/

#include "../include/header.h"

int    counting_o(char *buf)
{
    int a = 0;
    int compteur = 0;

    while (buf[a] != '\0') {
        if (buf[a] == 'O')
            compteur++;
        a++;
    }
    return (compteur);
}
