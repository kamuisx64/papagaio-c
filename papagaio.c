#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Você não digitou nada\n");
        printf("Made By Davi Sales");
        exit(0);
    }

    printf("Você digitou %s\n", argv[1]);

    printf("Made By Davi Sales");
}
