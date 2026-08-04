#include<stdio.h>
#include<string.h>

struct Student{
    int rno;
    char name[100];
    int c;
    int m;
    int p;
};

int main(){
    struct Student s1;
    printf("Roll No: \n");
    scanf("%d",&s1.rno);
    printf("Name:\n");
    scanf("%s",&s1.name);
    printf("Marks in C:\n");
    scanf("%d",&s1.c);
    printf("Marks in Mathematics:\n");
    scanf("%d",&s1.m);
    printf("Marks in Physics:\n");
    scanf("%d",&s1.p);
    int tm=s1.m+s1.c+s1.p;
    int avg=tm/3;
    printf("Total Marks: %d\n",tm);
    printf("Average Marks: %d\n",avg);
    return 0;
}


