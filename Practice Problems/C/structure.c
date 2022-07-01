#include<stdio.h>
struct Rectangle
{
    int length; //4
    int breadth; //4
};

int main() {
    struct Rectangle r;
    r.length =100;
    r.breadth =10;
    printf("%d",(r.length));
    printf("%d", sizeof(r));
}
