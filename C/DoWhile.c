#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < n);
    return 0;
}
// Loop atleast runs for the first time and then the condition is checked
