#include<stdio.h>

int count;
extern void write();

int main(int argc, char const *argv[])
{
    count = 5;

    write();

    return 0;
}