#include<stdio.h>
int power(int m, int n){
    int output = m;
    for (int i = 1; i < n; i++)
    {
        output = output * m;
    }
    return output;
}
int main(){
    printf("%d",power(3,3));
}
