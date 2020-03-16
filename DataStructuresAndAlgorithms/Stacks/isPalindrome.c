#include<stdio.h>
#include<stdlib.h>

int isPalindrome(char str[]){
    //the first index
    int i = 0;
    //the last index
    int j = strlen(str)-1;

    while(i < j && str[i] == str[j]){
        //increment start index and decrement last index
        i++;
        j--;
    }

    if(i < j){
        //did not reach the center
        printf("Not a palindrome\n");
        return 0;
    }
    else{
        //reached the center
        printf("Palindrome\n");
        return 1;
    }
}

int main(void){
    isPalindrome("ababaXababa");
    isPalindrome("ababababXbababbbbabba");
    return 0;
}
