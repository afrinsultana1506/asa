
#include <iostream>
using namespace std;


void swap() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swap: x=" << x << " y=" << y << "\n";
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After swap: x=" << x << " y=" << y << "\n";

}
int main(){
swap();

return 0;}

