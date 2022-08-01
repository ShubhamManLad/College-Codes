#include<stdio.h>

char* reverse(char* str);

void main() {
int i, j, k;
char str[100]="Hello";
char *rev;
//printf("Enter the string: \t");
//scanf("%s", str);
for (int i = 0; i < 5; i++)
{
    printf("%c\n",str[i]);
}


printf("Original string %s\n", str);
rev = reverse(str);
printf("Reversed string %s\n", rev);
}

char* reverse(char* str){    
int i=0;
char rev[100];
if (*str)
    {
        reverse(str + 1);
        rev[i++]=str[i];
    }
return rev;
}
