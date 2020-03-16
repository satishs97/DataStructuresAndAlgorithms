#include<stdio.h>

int countingNumberofOneswithBitwiseAND(unsigned int n){
    int count =0;
    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
void countingNumberofOneswithBitwiseAND_test(){
    int i=10;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithBitwiseAND(i));
    i = 5;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithBitwiseAND(i));
    i = 100;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithBitwiseAND(i));
    i = 1;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithBitwiseAND(i));
    i = 0;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithBitwiseAND(i));    
}
