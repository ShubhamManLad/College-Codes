/*#include<stdio.h>
void string(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    char str[100];
    gets(str);
    string(str);
    char String;
    scanf("%c",&String);
    printf("%c",String);
    char s[100];//gets only one word
    scanf("%s",s);
    printf("%s",s);

}*/
#include <stdio.h>

int main () {
   char str[50];

   printf("Enter a string : ");
   gets(str);

   printf("You entered: %s\n", str);
   printf("%c",str[6]);

   return(0);
}
