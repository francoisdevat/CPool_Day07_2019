/*
** EPITECH PROJECT, 2019
** fonction de contage 
** File description:
** je comprend rien aux strings
*/

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0')           
    {
        ++i;
    }
    return i;
}
