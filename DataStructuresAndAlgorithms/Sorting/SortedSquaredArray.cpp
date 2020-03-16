#include<bits/stdc++.h> 
using namespace std; 
void sortedSquaredArray(int A[], int n) {
    int result[n];
    for (int i = 0; i < n; ++i)
        result[i] = A[i] * A[i];

    sort(result, result+n);

    cout << "\nSorted squares array " << endl; 
    for (int i = 0 ; i < n ; i++) 
        cout << result[i] << " " ; 
}

int main(){ 
    int A[] = { -4, -3, -1, 3, 4, 5 }; 
    int n = sizeof(A)/sizeof(A[0]); 

    cout << "Given sorted array " << endl; 
    for (int i = 0; i < n; i++) 
        cout << A[i] << " " ; 
    sortedSquaredArray(A, n); 
    return 0; 
}
