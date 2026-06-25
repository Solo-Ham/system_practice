#include<stdio.h>


int main()
{
    short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);

    unsigned u = 4294967295u;

    int tu = (int) u; 
/* UMax */
    printf("u = %u, tu = %d\n", u, tu);

//This displays the value of u as an unsigned integer and the value of tu as a signed integer. Since u is the maximum value for an unsigned 32-bit integer, when it is cast to a signed integer, it wraps around to -1 due to overflow..

    return 0;
}