int table[256];
void buildTable(void){
    int i;
    for(i = 0; i < 256; i++){
        unsigned char t = i;
        table[i] = 0;
        for(int j = 0; j < 8; j++){
            if(t & 1) table[i]++;
            t >>= 1;
        }
    }
}
int countingNumberofOneswithPreprocessing(unsigned int n){
    int count = 0;
    for(; n; n >>= 4)
        count = count + table[n & 0xf];
    return count;
}
void countingNumberofOneswithPreprocessing_test(){
    buildTable();
    int i=10;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithPreprocessing(i));
    i = 5;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithPreprocessing(i));
    i = 100;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithPreprocessing(i));
    i = 1;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithPreprocessing(i));
    i = 0;
    printf("Number of one's in %d is/are %d\n",i, countingNumberofOneswithPreprocessing(i));    
}
