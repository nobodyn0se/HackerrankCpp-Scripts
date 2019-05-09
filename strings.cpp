#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,c;
    char c1, c2, tmp;
    int la, lb;
    cin >> a;
    cin >> b;
    la = a.size();
    lb = b.size();
    cout << la <<" "<< lb << endl;
    c = a + b;
    cout << c << endl;
    c1 = a[0];
    c2 = b[0];
    b[0] = c1;
    a[0] = c2;
    cout << a <<" "<< b; 
    return 0;
}

