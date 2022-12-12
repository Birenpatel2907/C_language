#include <stdio.h>      
void main()    
{   
      char str [100];
      int  ndigit, nspace, nother;
      int i;
      printf("Enter a line of text:\n");
      gets(str);
      ndigit = nspace = nother = 0; 
      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= '0' && ch<= '9')
                       ndigit++;
              else if (ch == ' ' || ch =='\n' || ch == '\t')
                       nspace++;
              else 
			  		   nother++;
                       i++;
          }
          
              printf("White spaces : %d", nspace);
              printf(" Digits : %d \tOther chars : %d\n", ndigit, nother);
              getc;
}              