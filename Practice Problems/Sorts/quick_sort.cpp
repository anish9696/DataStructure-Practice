//insertion sort works as one part is sorted and another part is unsorted 
// takes one element and put it in correct position and then move 
// array = {12, 11, 13, 5, 6};

#include<iostream>
using namespace std;

void print_array(int arr[],int size){
    for(int i = 0;i<siz;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}

void insertion_sort(int arr[], int size){
    int i,key, j;
    for( i =1;i<size;i++) {
        key = arr[i];
        j = i -1;
        while(j >= 0 && arr[j]> key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}


int main(){

    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr)/sizeof(int);
    insertion_sort(arr, size);
    print_array(arr, size);
    return 0;
}