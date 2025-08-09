
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of n:"<<endl;
    cin >> n;

    cout<<"Enter the number of array element:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        cout <<sum << " ";
    }
    return 0;
}
