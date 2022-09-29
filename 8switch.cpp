#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float n1,n2;
    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Enter operation"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
     case '-':
        cout<<n1-n2<<endl;
        break;
     case '*':
        cout<<n1*n2<<endl;
        break;
     case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"enter other operations"<< endl;
        break;
    }

    return 0;
}
