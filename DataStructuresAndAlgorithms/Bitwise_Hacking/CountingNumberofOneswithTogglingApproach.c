int countingNumberofOneswithTogglingApproach(unsigned int n){
    int count =0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}
void countingNumberofOneswithTogglingApproach_test(){
    int i=10;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithTogglingApproach(i));
    i = 5;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithTogglingApproach(i));
    i = 100;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithTogglingApproach(i));
    i = 1;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithTogglingApproach(i));
    i = 0;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithTogglingApproach(i));    
}
