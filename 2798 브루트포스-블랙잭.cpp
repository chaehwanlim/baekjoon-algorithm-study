#include <iostream>
using namespace std;

int main() {
    int n, m, data[100], temp, result;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>data[i];
    }

    for (int i=0; i<n-2; i++){
        for (int j=i+1; j<n-1; j++){
            for (int k=j+1; k<n-2; k++){
                temp = data[i]+data[j]+data[k];
                if(temp <= m && m-temp < m-result)
                    result = temp;
            }
        }
    }

    cout<<result;
    return 0;
}