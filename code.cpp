#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout<<"Enter the number of n:"<<endl;
    cin >> n;
    cout<<"Enter the number of element:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) {cin >> arr[i];}
    cout<<"search element:"<<endl;
    cin >> key;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}

