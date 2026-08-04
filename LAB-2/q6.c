#include<stdio.h>
#include<string.h>

struct Distance{
    int feet;
    int inches;
};

int main(){
    struct Distance s1;
    struct Distance s2;
    printf("Feet: \n");
    scanf("%d",&s1.feet);
    printf("Inches:\n");
    scanf("%d",&s1.inches);
    printf("Feet:\n");
    scanf("%d",&s2.feet);
    printf("Inches:\n");
    scanf("%d",&s2.inches);
    printf("Feet1: %d\n",s1.feet);
    printf("Inches1: %d\n",s1.inches);
    printf("Feet2: %d\n",s2.feet);
    printf("Inches2: %d\n",s2.inches);
    return 0;
}


