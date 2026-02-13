#include <stdio.h>
int main()
{
    int ch;
    printf("enter an alphabet:");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
       || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
       {
        printf("it is vowel");
       } else 
       {
        printf("it s consotant");
       }
return 0;
   