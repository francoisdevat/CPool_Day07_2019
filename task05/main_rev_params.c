/*
** EPITECH PROJECT, 2019
** eve
** File description:
** lol
*/

void my_putchar(char c);

int my_putstr(char const *c);

int main(int argc, char **argv)
{
    int i = argc - 1;
    
    while (i >= 0) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i--;
    }
}
        

    
    
