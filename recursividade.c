#include <stdio.h>
// ver essa merda depois


int mult(int n1, int n2)
{
if (n2 == 0)
{
    return 0;
}
else
{
    return n1 + mult(n1, n2 - 1);
}
}

int main()
{
int n1;
int n2;

    printf("Entre com a multiplicacao:   \n");
        scanf("%d*%d", &n1, &n2);
    printf("O resultado e: %d", mult(n1, n2));

return 0;
}