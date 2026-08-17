#include <iostream>

using namespace std;

class Student{
    public:
    string Name;
    int Age;
    int RollNo;

    void introduction(){
        cout<<"My name is : "<<Name<<endl;
        cout<<"Roll number : "<<RollNo<<endl;
        cout<<"Age : "<<Age<<endl;
    }
};
int main(){
    Student s1 ;
    s1.Name = "Kabir";
    s1.Age = 19;
    s1.RollNo = 2556569;

    s1.introduction();
}