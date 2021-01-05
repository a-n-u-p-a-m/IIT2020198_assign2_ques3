#include <stdio.h>
int main(void)

{
   char c='0';short s=0;
   while (c<='10')
     {
        printf("%c",c);
        c=c+1;
     }
     
   printf("\n");
   
   while (s<=10)
     {
        printf("%hd",s);
        s++;
     }
     return 0;
}              
