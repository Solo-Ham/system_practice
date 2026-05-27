#include<stdio.h>



int main()
{
//solution for A
    int mask = 0x00000000;

    int x = 0x87654321;

    printf("0x%08x", x&mask);

    printf("\n");


//SOLUTION FOR B
    int mask2 = 0x000000FF;
    int x2 = 0x789ABC21;

    printf("0x%08x", x2&mask2);

    printf("\n");

//soltion for C
    int mask3 = 0xFFFFFFFF;
    int x3 = 0x876543FF;

    printf("0x%08x", x3&mask3);

    printf("\n");

}