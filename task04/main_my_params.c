/*
** EPITECH PROJECT, 2019
** lol
** File description:
** lol
*/

void my_putchar(char c);

int my_putstr(char const *c);

int main(int argc, char **argv)
{
    int i = 0;

    while (i <= argc - 1) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
}
