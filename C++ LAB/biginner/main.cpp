#include <iostream>
#include <string>
using namespace std;

int main()
{
   double results;
   double num1;
   double num2;
   char op;
   cout<<"Enter first num: ";
   cin>>num1;
    cout<<"Enter second num: ";
    cin>>num2;
    cout<<"Enter an operator: ";
    cin>>op;
    if(op == '+'){
        results = num1 + num2;
        cout<<num1<<op<<num2<< " = "<<results;
            }
    else if(op == '-'){
        results = num1 - num2;
        cout<<num1<<op<<num2<< " = "<<results;
    }
    else if(op == '*'){
        results = num1 * num2;
        cout<<num1<<op<<num2<< " = "<<results;
    }
    if(op == '/'){
        if (num1!=0){
            results = num1 / num2;
            cout<<num1<<op<<num2<< " = "<<results;
            }
        else
        {
            cout<<"Zero division!"<<endl;
        }
    }

    return 0;
}
