
#include <iostream>
using namespace std;

void sumArray() {
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of elements = " << sum << "\n";

}
int main(){
sumArray();
return 0;
}




