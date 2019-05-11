#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int i=0;
    getline(cin,s);
    while(s[i] != '\0') {
        if(s[i] != ',')
            cout << s[i];
        else 
            cout <<"\n";
        i++;    
    }
    return 0;
}