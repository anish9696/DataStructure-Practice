//palindrome number is one which is identical from both sides 

#include<stdio.h>
int checkPalindrome(int n){
    int number = n;
    int rem,newNum=0 ;

    while(n!=0){
        rem = n %10;
        newNum = newNum *10+rem;
        n = n/10; 
    }
    if(newNum  == number)
    {
        return 1;
    }
    else return -1;
}
int main(){
    printf("%d", checkPalindrome(0));
}