/*
** EPITECH PROJECT, 2018
** conditions
** File description:
** conditions
*/

#include "../include/header.h"

int    testing_arg(char *buf)
{
    int d = 0;
    int c_two = 0;

    while (buf[d] != '\0') {
        if (buf[d] == 'P')
            c_two++;
        d++;
    }
    if (c_two != 1)
        return (1);
    return (0);
}

int    bad_conditions(char *buf)
{
    int d = 0;
    int c_one = 0;
    int c_tree = 0;
    int c_five = 0;

    while (buf[d] != '\0') {
        if (buf[d] == 'X')
            c_one++;
        if (buf[d] == 'O')
            c_tree++;
        d++;
    }
    if (testing_arg(buf) == 1)
        return (1);
    if (c_one != c_tree)
        return (1);
    if (c_five != 0)
        return (1);
    return (0);
}
