#include<stdio.h>
void main()
{
    char subjects[5][10] = {"Economy", "Science", "English","Gujrati", "Account"};
    int marks[5] = {70,55,50,73,80};
    int max_marks = 100;
    int passsing_marks = 40;

    printf("Subjects\t|\tmax_marks\t|\tmarks\n");

    for(int i=0; i<5; i++)
    {
        printf("%s\t\t|\t%d\t\t|\t%d\n",subjects[i],max_marks,marks[i]);
    }
    int total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

    printf("Total\t\t|\t-\t\t|\t%d",total);
    float per = total / 5;
    printf("\n percentage is %f",per);
}