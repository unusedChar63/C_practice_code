#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a,b,c;
    char d, e, f;
    float g, h, i;
    double j,k,l;

    a = 20;
    b = 10;

    c = a + b;
    printf("c=%d\n", c);
    
    d = 'a';
    printf("d=%c\n", d);

    g = 10.0;
    h = 2.00;
    i = g/h;

    printf("i=%lf\n", i);


    return 0;
}
