#include <stdio.h>

/*
function functionname
{// base condition

recirsive called
}*/

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}
void recursion()
{
    printf("Recursion called %d",sum(100) );
}
int main(void)
{
    recursion();
    return 0;
}