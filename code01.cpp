
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of n:"<<endl;
    cin >> n;
    cout<<"Enter the number of array element:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) cout << arr[i] << " ";
    }
    return 0;
}
