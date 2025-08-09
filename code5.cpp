
#include <iostream>
using namespace std;


void largestnumber(){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    cout << "Largest number = " << largest << "\n";

}

int main(){
   largestnumber();

    return 0;
}
