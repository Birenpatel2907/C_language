#include<stdio.h>
main()
{
    int marks[2][4] = {{5,4,2,7},{8,9,1,6}};

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
}