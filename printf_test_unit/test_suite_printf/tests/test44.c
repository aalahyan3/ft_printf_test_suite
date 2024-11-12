#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);

    if (arg == 0) {
        printf("%i", 123);
    } 
    else if (arg == 1) {
        ft_printf("%i", 123);
    }
    return (0);
}