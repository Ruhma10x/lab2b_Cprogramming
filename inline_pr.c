#include <stdio.h>
#include <stdlib.h>

static inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5;
    int y = 7;
    int result = add(x, y);
    printf("The result of the addition of %d and %d is %d\n",x,y,result);
    return 0;
}