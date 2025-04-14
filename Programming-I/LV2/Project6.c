#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);
    printf("%d", ((x % 2 != 0) && (x > 20)) * 1234);

    return 0;
}
