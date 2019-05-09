#include <iostream>
#include <sstream>
#include<string>
using std::string;
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private: int age;
             int std;
             string fname;
             string lname;
    public:
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }
        void set_standard(int b) {
            std = b;
        }
        int get_standard() {
            return std;
        }
        void set_first_name(string c) {
            fname = c;
        }
        string get_first_name() {
            return fname;
        }
        void set_last_name(string d) {
            lname = d;
        }
        string get_last_name() {
            return lname;
        }
        void to_string() {
            cout << age <<"," <<fname <<","<< lname<<","<< std;
        }

        
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}

