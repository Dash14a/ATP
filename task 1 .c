#include <math.h>
#include <stdio.h>

int main()
{
    int n, k = 1;
    
    printf("Введіть число: ");
    scanf("%d", &n);
    while (pow(k, 2) < n){
        k++;
    }
    if (pow(k,2) > n){
        printf("%d", (k-1));
    } else {
        printf("%d", k);
    }
    return 0;
}


