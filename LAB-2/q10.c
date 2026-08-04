#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    int rno;
    char name[20];
    struct Date d1;
}s1;

int main(){
    printf("Name:\n");
    scanf("%s",&s1.name);
    printf("Roll No:\n");
    scanf("%d",&s1.rno);
    printf("DOB\n");
    scanf("%d %d %d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
    printf("Name: %s\n",s1.name);
    printf("Roll No:%d\n",s1.rno);
    printf("DOB:%d/%d/%d\n",s1.d1.day,s1.d1.month,s1.d1.year);
    return 0;
}