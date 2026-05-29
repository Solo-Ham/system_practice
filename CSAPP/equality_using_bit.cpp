#include<stdio.h>

//Method 1
int compare(int x, int y)
{
    int a = x & y;  // if x == y is true, then a==x or a==y is true

    if((a == x) && (a == y)) return 1;

    return 0;
}

//Method 2
int compare2(int x, int y)
{
    return !(x^y);
}

int main()
{
    int a = 2;

    int b = 8;
    printf("%d\n", compare2(a, b));
}