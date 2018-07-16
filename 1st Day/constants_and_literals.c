#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a = 10ul;
    int c = 'c';

    printf("%d\n", a);    

    a = 0x20;
    printf("10 \n", a);    

    c = 'd';
    printf("%c\n", c);

    char d[12]= "Hello World";
    printf("%s\n", d);

    return 0;
}
