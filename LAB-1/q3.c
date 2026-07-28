#include<stdio.h>
#include<string.h>

struct Book{
    int bid;
    char tt[100];
    char name[100];
    int Price;
};

int main(){
    struct Book s1;
    printf("Book ID: \n");
    scanf("%d",&s1.bid);
    printf("Title:\n");
    scanf("%s",&s1.tt);
    printf("Author Name:\n");
    scanf("%s",&s1.name);
    printf("Price:\n");
    scanf("%d",&s1.Price);
    printf("Book ID: %d\n",s1.bid);
    printf("Title: %s\n",s1.tt);
    printf("Author Name: %s\n",s1.name);
    printf("Price: %d\n",s1.Price);
    return 0;
}

