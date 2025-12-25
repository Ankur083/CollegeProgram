

#include<stdio.h>

unsigned long int fact(int n) {
    unsigned long long f = 1;
    for(int i = 1; i<=n; i++)
        f *= i;
    
        return f;
}

int main () {   
    int n;
    printf("\nEnter thr number of nodes : ");    
    scanf("%d", &n);

    unsigned long long ans = fact(2*n) / (fact(n+1) * fact(n));
    printf("\nNumber of unlabeled binary tree (total structures) possible with %d nodes : %llu", n, ans);
    
    printf("\nNumber of labelled binary tree possible with %d nodes : %llu", n, ans * fact(n));
    return 0;
}