#include <iostream>
#include <algorithm>
using namespace std;

float sum(float a ,float b){
    int sum=0;
    sum=a+b;
    return sum;
}
float sub(float a ,float b){
    int sub=0;
    sub=a-b;
    return sub;
}
float pro(float a ,float b){
    int pro=0;
    pro=a*b;
    return pro;
}
float div(float a ,float b){
    int div=0;
    div=a/b;
    return div;
}

int main()
{
    {
        char op;
        float num1, num2;

        cout << "Enter operator: +, -, /, *: ";
        cin >> op;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (op)
        {

        case '+':
            cout<< "Sum is : " << sum(num1,num2);
            break;

        case '-':
            cout<<"Diff is: " <<sub(num1,num2);
            break;

        case '*':
            cout <<"Product is: " << pro(num1,num2);
            break;

        case '/':
            cout <<"Div is: "<<div(num1,num2);
            break;

        default:
            // If the operator is wrong error message is shown
            cout << "Error! operator is not correct";
            break;
        }
        return 0;
    }
}