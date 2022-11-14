#include <stdio.h>

int main(void)
{
    typedef char *string;

    string name;

    char *kitName = "Velvet::Brown";

    name = kitName;

    printf("My name is %s\n", name);
}
