/*
** EPITECH PROJECT, 2019
** stract
** File description:
** je sais pas
*/

char*my_strcat(char *dest, char *src)
{
    int len;
    int i;

    len = my_strlen(dest);
    i = 0;
    while (src[i] =! '\0') {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
