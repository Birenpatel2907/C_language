#include<stdio.h>
main()
{
    char name[10] = "divyang";
    printf("%s\n\n", name);

    char names[4][10] = {"payal", "divya", "naim", "biren"};
    for(int i=0; i<4; i++)
    {
        printf("%s\n", names[i]);
    }
}