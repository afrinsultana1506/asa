
#include <iostream>
using namespace std;



void Pattern() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << "\n";
    }

}
int main(){
Pattern();
return 0;
}




