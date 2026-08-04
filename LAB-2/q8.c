#include<stdio.h>
#include<string.h>

struct Employee{
    char name[100];
    int salary;
};

int main(){
    struct Employee s1[5];
    for(int i=0;i<5;i++){
        printf("Enter Name:\n");
        scanf("%s",&s1[i].name);
        printf("Enter salary\n");
        scanf("%d",&s1[i].salary);
    }
    int maxi=s1[0].salary;
    for(int i=0;i<5;i++){
        if(s1[i].salary>maxi){
            maxi=s1[i].salary;
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(s1[i].salary==maxi){
            printf("Name:%s\n",s1[i].name);
            printf("Salary:%d\n",s1[i].salary);
        }
    }
    return 0;
}


