#include <math.h>
#include <stdio.h>

int main()
{
    int n = 0;
    printf("Введіть число: ");
    scanf("%d", &n);
    switch (n){
        case 1: printf("погано");
        break;
        case 2: printf("незадовільно");
        break;
        case 3: printf("задовільно");
        break;
        case 4: printf("добре");
        break;
        case 5: printf("відмінно");
        break;
        default: printf("помилка");
    }
    return 0;
}