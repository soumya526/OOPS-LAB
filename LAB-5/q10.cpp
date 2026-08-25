#include <iostream>
using namespace std;

void process(int a, int b)
{
    cout<<a+b<<endl;
}

void process(int a, float b)
{
    float sum=a+b;
    cout<<sum<<endl;
}

void process(float a, float b)
{
    cout<< a + b<<endl;
}

void process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout<<sum<<endl;
}

void process(int *a, int *b)
{
    cout<<*a + *b<<endl;
}

int main()
{
    int a = 10, b = 20;
    int c = 15;
    float x = 12.5;
    float y = 7.5f;

    int arr[] = {10, 20, 30, 40, 50};

    process(a, b); 
    process(c, x);
    process(x, y);
    process(arr, 5);
    process(&a, &b);
    return 0;
}