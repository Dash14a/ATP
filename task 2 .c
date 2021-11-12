#include <math.h>
#include <stdio.h>

int main()
{
    int a, b, n = 0;
    printf("Введіть число A: ");
    scanf("%d", &a);
    printf("Введіть число B: ");
    scanf("%d", &b);
    while (b > (a+1)){
        b --;
        n ++;
        printf("%d\n", b);
    }
    printf("%d", n);
    return 0;
}