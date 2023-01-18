#include<iostream>
using namespace std;

int glo = 6;
void func1(){
    cout<<glo<<endl;
}

int main()
{
    int a =4,b=15;
    float pi = 3.14;
    char ch = 'a';
    int glo = 68;
    bool a1 = true; 

    glo = 78;
    func1();
    // cout<<a<<" "<<b<<endl;
    // cout<<"The value for pi is"<<pi<<endl;
    // cout<<"The character is "<<ch<<endl;
    cout<<glo<<endl;
    cout<<"Value for bool a1 is "<<a1<<endl;
    return 0;
}


// conclusion
// if we declare a local variable and a global variable with a same variable name , the local variable will get priority.
// function always checks for local variable in it. If not found,checks for global variable.