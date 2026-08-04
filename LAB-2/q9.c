#include<stdio.h>
#include<string.h>

struct Student{
    int rno;
    char name[100];
    float cgpa;
};

int main(){
    struct Student s1[5];
    for(int i=0;i<5;i++){
        printf("Enter Name:\n");
        scanf("%s",s1[i].name);
        printf("Enter Roll No:\n");
        scanf("%d",&s1[i].rno);
        printf("Enter CGPA:");
        scanf("%f",&s1[i].cgpa);
    }
    printf("........CGPA ABOVE OR EQUAL TO 8.............");
    for(int i=0;i<5;i++){
        if(s1[i].cgpa>=8){
            printf("Name:%s\n",s1[i].name);
            printf("Roll No:%d\n",s1[i].rno);
            printf("CGPA:%f\n",s1[i].cgpa);
            printf("/n");
        }
    }
    return 0;
}

