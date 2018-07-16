#include<stdio.h>

int main(int argc, char const *argv[])
{
    const auto int h = 10;
    const register int w = 10;
    const char nl = '\n';

    printf("area = %d %c", h*w, nl);

    return 0;
}