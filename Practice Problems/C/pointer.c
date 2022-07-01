#include<stdio.h>
struct linkList {

    int head;
    int ref;
    int tail;
};

int main() {
    int *p;
    p = (int *)malloc(5* sizeof(int)); //size specified and single block of memory with garbage value
    int *c;
    c =(int *)calloc(5, sizeof(int));

    printf("%d %d", sizeof(*p), sizeof(*c));
}
