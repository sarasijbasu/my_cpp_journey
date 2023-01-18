#include<iostream>
using namespace std;
int main()
{
    int a=5,b=4;
    cout<<"Arithmetic Operators in cpp"<<endl;
    cout<<"The value for a+b = "<<a + b <<endl;
    cout<<"The value for a+b = "<<a - b <<endl;
    cout<<"The value for a+b = "<<a * b <<endl;
    cout<<"The value for a+b = "<<a / b <<endl;
    cout<<"The value for a+b = "<<a % b <<endl;
    cout<<"The value for a+b = "<<a++<<endl;

    cout<<"\n";

    cout<<"Assignment Operators"<<endl;
    a = 3,b = 4;
    cout<<"The value for a==b is "<<(a == b) <<endl;
    cout<<"The value for a==b is "<<(a != b) <<endl;
    cout<<"The value for a==b is "<<(a <= b) <<endl;
    cout<<"The value for a==b is "<<(a >= b) <<endl;
    cout<<"The initial value for a is "<<a<<". "<<"The value after a++ is "<<(a++) <<endl;
    cout<<"Now the value is "<<a<<endl;
    cout<<"The value for a-- is "<<(a--) <<endl;
    cout<<"The value of a is "<< a << endl;
    cout<<"Initial value of a is "<< a <<" . The value after ++ operation is "<<(++a) <<"."<<endl;
    cout<<"The value of a is "<<a;
    cout<<"The value for --a = "<<(--a) <<endl;
    cout<<"The value of a is "<<a;

    
    return 0;
}