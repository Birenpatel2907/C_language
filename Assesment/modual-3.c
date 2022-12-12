#include <stdio.h>
void main()
{
   
	int n;
    char s[100];
    char name1[100]; 
    char name2[100]; 
    int i,j; 
    int r = 0;
    char name[100];
    char Str[100];
    int count=0;
    char t [100];
    char ch;
   once:
    printf("****SELECT YOUR CHOISE****\n");
    printf(" 1. reverse a string \n 2. Concatenation \n 3. Palindrome \n 4. Copy a string \n 5. Length of the string \n 6. Frequency of character in s string \n\n");

    printf("\n Enter your choise: ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            printf("Enter a string to reverse: ");
            scanf("%s",&s[0]);
            strrev(s);
            printf("\nReverse of the string: %s", s);
            break;

        case 2:
            printf("Enter name1: ");  
            scanf("%s",name1);  
            printf("Enter name2: ");  
            scanf("%s",name2);  

            for(i=0;name1[i]!='\0';i++); 
                
            for(int j=0;name2[j]!='\0';j++)  
            {     
                name1[i]=name2[j];  
                i++;  
            } 
            name1[i]='\0';  

            printf("After concatenation is done, the new concatenated string will be: %s", name1);  
            
            break;


        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);
                while (i != 0)
                {
                    r = r * 10;
                    r = r + i%10;
                    i = i/10;
                }

                if (n == r){
                    printf("%d is a palindrome number.\n", n);}
                else{
                    printf("%d is not a palindrome number.\n", n);}
            break;


        case 4:
            printf("Input a string: ");
            scanf("%s",&name[0]);
            strcpy(name1, name);
            printf("First string: %s\n", name);
            printf("second string: %s\n", name1);
            break;


        case 5:
            printf("Enter the String: ");
            scanf("%s", &Str[0]);
            for (i = 0; Str[i] != '\0'; ++i); 
            printf("Length of String is %d", i);           
			break;


        case 6:
            printf("Enter a String: ");
            fflush(stdin);
            scanf("%s",&t[0]);
            printf("\nEnter any character to find its frequency: ");
            fflush(stdin);
            scanf("%c",&ch);
            fflush(stdin);
            for(i=0; t[i]!='\0'; i++)
            {
                if(ch == t[i])
                {
                    count++;
                    
                }   
            }
            printf("\nFrequency of %c = %d", ch, count); 
            break;

        default:
			printf("\nInvalid Input!!");
    }

    printf("\nDo you want continue <press 1 to continue>");
	fflush(stdin);
	scanf("%d",&n);
	fflush(stdin);
	if(n == 1)
	{
		goto once;
	}
	printf("\nThank you!!");
}