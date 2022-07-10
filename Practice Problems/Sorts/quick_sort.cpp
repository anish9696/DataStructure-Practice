// quick sort using divide and conquer approach it's worst order complexity is o(n2)and best and average order case complexity is o(nlgn)


#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}

int partition(int array[],int low, int high) {

    int pivot = array[high];
    int i = (low -1);

    for (int j = low;j<= high; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[high]);
    return (i+1);
}

void quick_sort(int array[],int low , int high) {
    if( low < high) {

        int pi = partition(array, low, high);

        quick_sort(array, low, pi-1);
        quick_sort(array, pi+1, high);
    }
}

int main(){

    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(int);
    quick_sort(arr, 0, size-1);
    print_array(arr, size);
    return 0;
}
