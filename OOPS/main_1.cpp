#include<iostream>

using namespace std;

//Abstraction : Hiding complex things behind the procedure that make those things look simple.

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee :AbstractEmployee{
    private:
    // string Name;
    string Company;
    int Age;

    protected:
    string Name;
    public:

    //Example of setter and getter

    //setter
    void setName(string name){
        Name = name;
    }

    //getter
    string getName(){
        return Name;
    }


    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if(age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void intro(){
        cout<<"My name is : "<< Name<<endl;
        cout<<"Age is : "<<Age<<endl;
        cout<<"Working in : "<<Company<<endl;
    }

    //Constructors

    //Constructor does not have return type.
    //Constructor has the same name as the class.
    //The constructor must be public.

    Employee(string name,string company,int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if(Age > 30 ){
            cout<<"Congrats "<<Name<<" you got promoted !"<<endl;
        }else{
            cout<<"Sorry ! "<<Name<<" your promotion is denied."<<endl;
        }
    }
    void Work(){
        cout<<Name<<" is checking email, task backlog, performing tasks ...."<<endl;
    }
};


//Inheritence : Inheritance is one of the fundamental concepts of Object-Oriented Programming (OOP)
// that allows a class to acquire the properties and behaviors of another class. 


class Developer :public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name,string company,int age,string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug(){
        cout<<Name<<" is fixing the bug in "<<FavProgrammingLanguage<<"."<<endl;
    }
    void Work(){
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code."<<endl;
    }
};

class Teacher : Employee{
    public:
    string Subject;
    void PrepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" for his exams ."<<endl;
    }
    Teacher(string name,string company,int age,string subject):Employee(name,company,age){
        Subject = subject;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<endl;
    }
};
int main(){
    Employee employee = Employee("kabir","Google",56); // This is the making of constructor

    // employee.Age = 52;
    // employee.Company = "Amazon";
    // employee.Name = "kabir";
    // employee.intro();

    // employee.setAge(9);
    // employee.setName("Rehan");

    // cout<<employee.getName()<<" "<<employee.getAge();

    // employee.AskForPromotion();

    Developer d = Developer("Kabir","amazon",90,"C++");

    // d.FixBug();

    // d.AskForPromotion();

    Teacher t = Teacher("Rehan","Sd",50,"Science");

    // t.PrepareLesson();

    d.Work();
    t.Work();
}