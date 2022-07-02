//linear search search based on sequentially and it takes o(numberof item) times while searching
// no need for a sorted array
//array = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170}
//everything is inputted
#include<iostream>
using namespace std;
int linear_search(int array[], int searchNum, int length){
    length --;
    if(length < 0)
    return -1;
    if(array[length] == searchNum)
    return length;

    return linear_search(array, searchNum, length);
}

int main(){
    int array[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int searchNum;
    cin>>searchNum;
    int length = sizeof(array)/sizeof(int);
    int pos = linear_search(array, searchNum,length);
    if(pos!= -1){
        cout<<"number found at "<<pos;
    }
    else {
        cout <<"not found";
    }
    return 0;
}
