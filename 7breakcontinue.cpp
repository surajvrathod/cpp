#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /*
    int a,i;
    cin>>a;
    for ( i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            cout<<"Non Prime";
            break;
        }
    }
    if (a==i)
    {
        cout<<"Prime";   
    }
    */
int a,b,i;
cin>>a>>b;
for (int num = a; num < b; num++)
{
for ( i = 2; i < num; i++)
{
if(num%i==0){
    break;
}
}
if (i==num)
{
cout<<num<<endl;
}
}
    return 0;
}