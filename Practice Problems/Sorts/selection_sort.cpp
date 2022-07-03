#include<iostream>
using namespace std;

void print_array(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int size){
    int i, j, min;

    for(i = 0; i<size-1; i++)
    {
        min = i;
        for(j = i+1; j <size; j++)
            if(arr[j]< arr[min])
                min = j;
            swap(&arr[min], &arr[i]);
    }
}

int main(){

    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(int);
    selection_sort(arr, size);
    print_array(arr, size);
    return 0;
}