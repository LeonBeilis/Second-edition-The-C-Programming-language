#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool exp = EOF != getchar();
    printf("expression for (EOF != getchar()) is: %d", exp);
}