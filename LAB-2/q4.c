#include<stdio.h>
#include<string.h>

struct Product{
    int pid;
    char name[100];
    int price;
    int qty;
};

int main(){
    struct Product s1;
    printf("Product ID: \n");
    scanf("%d",&s1.pid);
    printf("Product Name:\n");
    scanf("%s",&s1.name);
    printf("Price:\n");
    scanf("%d",&s1.price);
    printf("Quantity:\n");
    scanf("%d",&s1.qty);
    printf("Product ID: %d\n",s1.pid);
    printf("Product Name: %s\n",s1.name);
    printf("Price: %d\n",s1.price);
    printf("Quantity: %d\n",s1.qty);
    return 0;
}

