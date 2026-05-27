#include<stdio.h>



int main()
{
//solution for A
    int mask = 0x000000FF;

    //just trial
    

    int x = 0x87654321;

    printf("0x%08x", x&mask);

    printf("\n");


//SOLUTION FOR B
    int mask2 = ~0;
    int x2 = 0x789ABC21;

    printf("0x%08x", x2&mask2);

    printf("\n");

//soltion for C
    int mask3 = ~0;
    int x3 = 0x876543FF;

    printf("0x%08x", x3&mask3);

    printf("\n");

}