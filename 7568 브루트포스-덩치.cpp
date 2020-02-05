#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int **data = new int *[n];
    int *rank = new int[n];

    for(int i=0; i<n; i++){
        data[i] = new int[2];
        for(int j=0; j<2; j++){
            cin >> data[i][j];
        }
        rank[i] = 0;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (data[i][0] > data[j][0] && data[i][1] > data[j][1])
                rank[j]++;
        }
    }

    for(int i=0; i<n; i++) {
        cout<< rank[i] + 1 <<" ";
    }
}