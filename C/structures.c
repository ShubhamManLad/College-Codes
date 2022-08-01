#include<stdio.h>
#include<string.h>
struct Employee{
    char name[30];
    int salary;
    int hours;
};
typedef struct Employee Emp;
void wages (Emp E[3]){
    for (int i=0;i<3;i++){
        if(E[i].hours>8 && E[i].hours<=10){
            E[i].salary+=50;
        }
        else if(E[i].hours>10 && E[i].hours<12){
            E[i].salary+=100;
        }
        else if (E[i].hours>=12)
        {
            E[i].salary+=150;
        }
    }
}
void input(Emp E[3]){
    for(int i=0;i<3;i++){
        scanf("%s %d %d",E[i].name,&E[i].salary,&E[i].hours);
    }
}
void output(Emp E[3]){
    for(int i=0;i<3;i++){
        printf("%s\n %d\n %d\n",E[i].name,E[i].salary,E[i].hours);
    }
}
int main(){
    Emp E[3];
    // for(int i=0;i<3;i++){
    //     scanf("%s %d %d",E[i].name,&E[i].salary,&E[i].hours);
    // }
    input(E);
    // for (int i=0;i<3;i++){
    //     if(E[i].hours>8 && E[i].hours<=10){
    //         E[i].salary+=50;
    //     }
    //     else if(E[i].hours>10 && E[i].hours<12){
    //         E[i].salary+=100;
    //     }
    //     else if (E[i].hours>=12)
    //     {
    //         E[i].salary+=150;
    //     }
    // }
    wages(E);
    // for(int i=0;i<3;i++){
    //     printf("%s\n %d\n %d\n",E[i].name,E[i].salary,E[i].hours);
    // }
    output(E);
}



