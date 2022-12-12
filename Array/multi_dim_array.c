#include<stdio.h>
void main()
{
    char m_array[2][4][3] = {
        {
            {'a','b','c'},
            {'d','e','f'},
            {'g','h','i'},
            {'j','k','l'}
        },
        {
            {'m','n','o'},
            {'p','q','r'},
            {'s','t','u'},
            {'v','w','x'}
        }
    };

    int i,j,k;

    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0; k<3; k++)
            {
                printf("[%d][%d][%d] = %c\n",i,j,k,m_array[i][j][k]);
            }printf("\n");
        }printf("\n");
    }
}