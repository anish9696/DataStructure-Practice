#include<stdio.h>
int[] fun(int a[],int length){
    int i ;
    for(i =0;i<length;i++){
        printf("%d",a[i]);
    }
    return a;

}

int main() {

    int a[] = {2,4,6,8,10};
    fun(a, 5);
}
