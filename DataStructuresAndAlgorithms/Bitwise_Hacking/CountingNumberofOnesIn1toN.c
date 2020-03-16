int countingNumberofOnesIn1toN(unsigned int n){
    int count =0;
    int i = 0, j;
    for (i = 1; i <= n; i++){
        j = i;
        while(j){
            j = j & (j-1);
            count++;
        }
    }
    return count;
}
void countingNumberofOnesIn1toN_test(){
    int n=5;
    printf("Number of set bits in all numbers from 1 to %d is/are %d\n",n, countingNumberofOnesIn1toN(n));
    n = 5;
    printf("Number of set bits in all numbers from 1 to %d is/are %d\n",n, countingNumberofOnesIn1toN(n));
    n = 100;
    printf("Number of set bits in all numbers from 1 to %d is/are %d\n",n, countingNumberofOnesIn1toN(n));
    n = 1;
    printf("Number of set bits in all numbers from 1 to %d is/are %d\n",n, countingNumberofOnesIn1toN(n));
    n = 0;
    printf("Number of set bits in all numbers from 1 to %d is/are %d\n",n, countingNumberofOnesIn1toN(n));    
}
