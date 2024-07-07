#include <iostream>
#include <sstream>
using namespace std;
//private members are only available for class functions, public is everywhere

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    
    private:
        int age1;
        string first_name1;
        string last_name1;
        int standard1;
        
    public:
        void set_age(int age){
            age1 = age; 
        }
        int get_age(){
            return age1;
        }
        
        void set_first_name(string first_name){
            first_name1 = first_name; 
        }
        string get_first_name(){
            return first_name1;
        }
        
        void set_last_name(string last_name){
            last_name1 = last_name; 
        }
        string get_last_name(){
            return last_name1;
        }
        
        void set_standard(int standard){
            standard1 = standard; 
        }
        int get_standard(){
            return standard1;
        }
        
        string to_string(){
            
            stringstream ss;
            ss<<age1<<','<<first_name1<<','<<last_name1<<','<<standard1;
            
            string s = ss.str();
            
            return s;
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
    cout << st.to_string();
    
    return 0;
}