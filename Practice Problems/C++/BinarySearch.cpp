// binary search work on sorted array and it takes o(log n) times while searching
// it used divide and conquer approach divide the array in two half
//array = {10, 20, 30, 50, 60, 80, 100, 130, 170}
//everything is inputted
//binary search can be recursive and non recursively and there is modified binary search  here i m using non recursive approach

#include<iostream>
using namespace std;

int binary_search(int array[], int num, int size){
    int low =0, high = size;

    while(low <= high){
        int mid =low + (high-1)/2;
        if(array[mid] == num){
            return mid;
            break;
        }
        else if(num > array[mid]){
            low = mid+1;
        }
        else {
             high = mid -1;
        }
    }
    return -1;
}

int main(){
    int array[] = {10, 20, 30, 50, 60, 80, 100, 130, 170};
    int length = sizeof(array)/sizeof(int);
    int searchValue;
    cin>>searchValue;
    int pos = binary_search(array, searchValue,length);
    if(pos != -1){
        cout<<"value found at "<< pos;
    }
    else {
        cout<<"Not found";
    }
    return 0;
}
