#include<stdio.h>

static int main_count;

void func();

int main(int argc, char const *argv[])
{
    main_count = 5;

    while(main_count)
    {

        func();
        main_count--;
    }
    

    return 0;
}

void func()
{
    static int func_count = 0;
    func_count++;
    printf("main_count = %d and func_count = %d\n", main_count, func_count);
}