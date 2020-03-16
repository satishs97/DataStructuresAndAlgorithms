int unorderedLinearSearch(int A[], int n, int data) {
    for (int i  = 0; i < n; i++) {
        if(A[i] == data)
            return i;
    }
    return -1;
}

void unorderedLinearSearch_test(){
    int n, data, A[10]={3,6,19,25,33,39,55,78,99,100};
    n =10;
    data =20;
    printf("\nElement %d is at location: %d (-1 indicates not present in array)", data, unorderedLinearSearch(A, n, data));
    data =39;
    printf("\nElement %d is at location: %d (-1 indicates not present in array)", data, unorderedLinearSearch(A, n, data));

}
