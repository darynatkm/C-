#include<iostream>

using namespace std;
typedef double height;

    template <class T>
    T multiply(T a, T b){
        return a*b;
    }

height darynaHeight=165.5;
struct Person
{
    string name;
    int age;
    string gender;
};

class PersonClass{
    private: 

    int p_age;
    string p_gender;
    int p_height;
    protected:
    string p_name;
    public: 
    PersonClass(string c_name, int c_age, string c_gender){
    p_name=c_name;
    p_age=c_age;
    p_gender=c_gender;

}
    void print(){
        cout<<p_name<<'/'<<p_age<<'/'<<p_gender<<'/'<<p_height<<endl;
    }  


    
    
    
};

class Employee : public PersonClass
{
private:
    int salary;
public:

    Employee(string n, int a, string g) : PersonClass(n,a,g){
        salary=100;
    }



};




void getPersonInfo(Person p){
    cout << "The name of the person is "<<p.name<<endl;
    cout << "The age of the person is "<<p.age<<endl;
    cout << "The gender of the person is "<<p.gender<<endl;
}
int main(){

Person Daryna;
Daryna.name="Daryna";
Daryna.age=24;
Daryna.gender="female";

//Easier and cleaner way

Person Darina={"Darina", 24, "female"};

getPersonInfo(Daryna);
}
