#include<stdio.h>
void callByValueSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void callByAddressSwap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10,b =20;
    callByValueSwap(a,b);
    printf("%d %d", a, b);
    callByAddressSwap(&a, &b);
    printf("%d %d", a, b);


}
