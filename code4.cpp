
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of n:"<<endl;
    cin >> n;
    int arr[n];

    cout<<"Enter the number of array element:"<<endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool counted = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                counted = true;
                break;
            }
        }
        if (!counted) {
            int count = 0;
            for (int k = 0; k < n; k++) {
                if (arr[k] == arr[i]) count++;
            }
            cout << arr[i] << ": " << count << endl;
        }
    }
    return 0;
}
