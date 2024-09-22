#include<iostream>
using namespace std;

void binarySearch(int array[], int n, int key) {
    int low = 0, high = n - 1;
    int mid;
    int flag = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        if (key == array[mid]) {
            flag = 1;
            break;
        } else if (key > array[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (flag == 1) {
        cout << "The key: " << key << endl;
        cout << "The position: " << mid + 1 << endl;
    } else {
        cout << "Nothing" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int key;
    cin >> key;

    binarySearch(array, n, key);

    return 0;
}

