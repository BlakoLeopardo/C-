#include <stdio.h>

int boo()
{
static int s = 1234;
int n = s%100;

    s += s/100;

return n;
}

int main()
{
    printf("O numero aleatorio e: %d\n", boo());
    printf("O numero aleatorio e: %d\n", boo());
    printf("O numero aleatorio e: %d\n", boo());
    printf("O numero aleatorio e: %d\n", boo());

return 0;
}