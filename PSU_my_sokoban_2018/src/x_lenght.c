/*
** EPITECH PROJECT, 2018
** x_lenght
** File description:
** x_lenght
*/

int    x_lenght(char *buf)
{
    int p = 0;

    while (buf[p] != '\n') {
        p++;
    }
    return (p);
}
