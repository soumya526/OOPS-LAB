#include<stdio.h>
#include<string.h>

struct Rectangle{
    int l;
    int b;
    int area;
    int peri;
};

int main(){
    struct Rectangle s1;
    printf("Length:\n");
    scanf("%d",&s1.l);
    printf("Breadth:\n");
    scanf("%d",&s1.b);
    s1.area=s1.l*s1.b;
    s1.peri=2*(s1.l+s1.b);
    printf("Area: %d\n",s1.area);
    printf("Perimeter: %d\n",s1.peri);
    return 0;
}


