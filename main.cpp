#include<iostream>
#include<string>

using namespace std;
int main(){

    int num=3;
    double num1=0.9;
    float num2=0.9;
    bool d=true;
    string name="";
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "Good morning " << name << endl;
    int testScore[30]{};
    testScore[0]=2;

    enum StudentNames{
        kenny,
        kyle,
        stan,
        max_students
    };
    for(int counter=0;counter<5;counter++){
    cout << "Hello world" << endl;
    }


    int age=0;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "Oh so you are " << age << " years old";

    return 0;
    test(10);


}
    void test(int num){
        cout << "testing testing"<< endl;
        if(num<10){
            cout << "Your number is less than 10";
        }
        else if(num==10){
            cout << "Your number is equal to 10";
        }
        else {
            cout << "Your number is greater than 10";
        }

    }