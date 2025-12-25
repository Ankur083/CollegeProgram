#include<stdio.h>

long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

long long catalanNumber(int n) {
    long long num = factorial(2 * n);
    long long denom = factorial(n + 1) * factorial(n);
    return num / denom;
}

int main() {
    int n;
    printf("Enter the number of distinct keys: ");
    scanf("%d", &n);

    printf("\nTotal number of BSTs possible with %d distinct keys is: ", n);
    printf("%lld", catalanNumber(n));

    return 0;
}
