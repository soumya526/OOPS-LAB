#include<stdio.h>
#include<string.h>

struct Employee{
    int empid;
    char name[100];
    int Salary;
};

int main(){
    struct Employee s1;
    struct Employee s2;
    struct Employee s3;
    printf("EmployeeID:\n");
    scanf("%d",&s1.empid);
    printf("Name:\n");
    scanf("%s",&s1.name);
    printf("Salary:\n");
    scanf("%d",&s1.Salary);
    printf("EmployeeID: %d\n",s1.empid);
    printf("Name: %s\n",s1.name);
    printf("Salary:Rs%d\n",s1.Salary);

    printf("EmployeeID:\n");
    scanf("%d",&s2.empid);
    printf("Name:\n");
    scanf("%s",&s2.name);
    printf("Salary:\n");
    scanf("%d",&s2.Salary);
    printf("EmployeeID: %d\n",s2.empid);
    printf("Name: %s\n",s2.name);
    printf("Salary:Rs %d\n",s2.Salary);

    printf("EmployeeID:\n");
    scanf("%d",&s3.empid);
    printf("Name:\n");
    scanf("%s",&s3.name);
    printf("Salary:\n");
    scanf("%d",&s3.Salary);
    printf("EmployeeID: %d\n",s3.empid);
    printf("Name: %s\n",s3.name);
    printf("Salary:Rs%d\n",s3.Salary);
    return 0;
}

