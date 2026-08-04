#include<stdio.h>
#include<string.h>

struct student{
    int rno;
    char name[100];
    int age;
    float cgpa;
};

int main(){
    struct student s1;
    scanf("%s",&s1.name);
    scanf("%d",&s1.rno);
    scanf("%d",&s1.age);
    scanf("%f",&s1.cgpa);
    printf("Roll No: %d\n",s1.rno);
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("CGPA: %.2f\n",s1.cgpa);
    return 0;
}
