int countingNumberofOneswithModuloOperator(unsigned int n){
    int count =0;
    while(n){
        if(n%2 == 1){
            count++;
        }
        n=n/2;
    }
    return count;
}
void countingNumberofOneswithModuloOperator_test(){
    int i=10;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithModuloOperator(i));
    i = 5;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithModuloOperator(i));
    i = 100;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithModuloOperator(i));
    i = 1;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithModuloOperator(i));
    i = 0;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithModuloOperator(i));    
}
