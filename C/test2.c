#include <stdio.h>
void print(int arr[3][3], int m)
{
int i, j;
for (i = 0; i < m; i++)
for (j = 0; j < m; j++)
printf("%d ", arr[i][j]);
}
int main()
{
int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
print(arr, 3);
return 0;
}
// int main()
// {
//     char s[20];
//     scanf("%[^\n]s",s);
//     printf("%s",s);
//     for (int i = 0; i < 20; i++)
//     {
//         printf("%c\n",s[i]);
//     }
    
// }
