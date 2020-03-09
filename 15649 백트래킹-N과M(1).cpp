#include <iostream>
using namespace std;

int factorial(int num){
    if (num <= 1)
        return 1;
    return num * factorial(num-1);
}

void main() {
    int n, m;
    cin>>n>>m;
    int permutation_nm = factorial(n) / factorial(n-m);

    int **data = new int* [permutation_nm];

    for(int i=0; i<n; i++){
        for(int j=0; j<)
        data[i] = new int[m];
        for(int k=0; k<n-1; k++){
            data[j][k] = 
        }
    }
}