//costly swap operation

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

void bubble_sort(int arr[], int size)
{
    for(int i = 0; i < size -1; i++)
    {
        for(int j = 0;j <size-i-1; j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    } 
}

int main(){

    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(int);
    bubble_sort(arr, size);
    print_array(arr, size);
    return 0;
}