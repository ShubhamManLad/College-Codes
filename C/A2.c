#include <stdio.h>
#include <string.h>

struct bank{
    int accno;
    char name[15];
    int bal;
};

void Bank(struct bank *ptr, int n){
    for (int i=0; i<n; i++){
        if (ptr->bal<100){
            printf("%s ", ptr->name);
            printf("%d\n", ptr->accno);
        }
        ptr++;
    }
}
int main(){
    struct bank Accounts[200]; int n;
    struct bank *pointer = NULL;
    pointer = Accounts;
    scanf("%d", &n);
    for (int i =0; i<n; i++){
        scanf("%d", &Accounts[i].accno);
        scanf("%s", Accounts[i].name);
        scanf("%d", &Accounts[i].bal);
    }
    
    
    int a; int b; int c;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    for (int i=0; i<n; i++){
            if (a == pointer->accno){
                if (c == 0){        
                    if (b>pointer->bal)
                    {
                        printf("The balance is insufficient for the specified withdrawal\n");
                    }
                    else{
                        pointer->bal-=b;
                        printf("%d\n", pointer->bal);
                        }
                }
                if (c == 1)
                { 
                    pointer->bal+= b;
                    printf("%d\n", pointer->bal);
                }
            }
            pointer++;
        }
    Bank(Accounts,n);
}