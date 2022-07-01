#include<stdio.h>
int factorial(int n) {
    int fact  = 1;
    for (int i =1;i<=n;i++){
        fact  = fact*i;
    }
    return fact;
}

int main() {
    printf("%d",factorial(5));
}
