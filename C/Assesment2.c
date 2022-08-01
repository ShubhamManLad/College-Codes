#include<stdio.h>
#include<string.h>
struct bank{
    int accno;
    char name[30];
    float balance;
};
typedef struct bank bank;
//Task 1
void below(int n,bank B[200]){
    printf("The balance is insufficient for the specified withdrawal");
    for(int i=0;i<n;i++){
        if(B[i].balance<100){
            printf("%s %d\n",B[i].name,B[i].accno);
        }
}
}
//Task 2
void req(int n,bank B[n]){
    int a,r;
    int amount;
    char s[30];
    scanf("%d %s %d",&a,s,&r);
    if(r==1){
        for(int i=0;i<n;i++){
            if(strcmp(s,B[i].name)==0 && a==B[i].accno){
                scanf("%d",&amount);
                B[i].balance+=amount;
                printf("The updated balance in the A/c No. %d is %0.2f\n",B[i].accno,B[i].balance);
            }
        }
    }
    if(r==0){
        for(int i=0;i<n;i++){
            if(strcmp(s,B[i].name)==0 && a==B[i].accno){
                if(B[i].balance<100){
                    printf("The balance is insufficient for the specified withdrawal.\n");
                }
                else{
                    printf("Enter the amount you want to withdraw:\n");
                    scanf("%d",&amount);
                    if(B[i].balance-amount<100){
                        printf("The balance is insufficient for the specified withdrawal.\n");
                    }
                    else{
                        B[i].balance-=amount;
                    printf("The updated balance in the A/c No. %d is %0.2f\n",B[i].accno,B[i].balance);
                    }
                }
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    bank B[200];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&B[i].accno,B[i].name,&B[i].balance);
    }
    below(n,B);
    req(n,B);
    return 0;
}