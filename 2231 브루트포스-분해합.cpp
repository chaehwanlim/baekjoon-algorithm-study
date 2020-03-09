#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    int sum, temp;

    while (1) {
        sum = i;
        temp = i;

        while (temp) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == n || i == n) {
            break;
        }

        i++;
    }

    if (i == n) {
        cout << 0;
    }
    else
    {
        cout << i;
    }

    return 0;
}