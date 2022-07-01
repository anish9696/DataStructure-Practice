#include<stdio.h>
int fibonacci(int n)
{
    int firstNum = 0, secondNum =1 , sum;
    if(n<=1) return n;
    for(int i = 2;i<=n;i++){
        sum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = sum;
    }
    return sum;
}

int main(){
    printf("%d", fibonacci(5));
}
