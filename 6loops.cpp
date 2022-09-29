#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /*int a;
    int sum=0;
    cin>>a;
    if(a>=1){

    for (int i = 0; i <=a; i++)
    {
        sum+=i;
    }
    cout<<"Sum of first "<<a<<" natural numbers is "<<sum<<endl;
    }
    else{
        cout<<"Please enter possitive number";
    }

int a;
cin>>a;
int sum=0;
int i=1;
if (a>0)
{
   while (a>=i)
{
    sum+=i;
    i++;
}
  cout<<"Sum of first "<<a<<" natural numbers is "<<sum<<endl;
}
else{
    cout<<"Please enter possitive number";
}
*/
int a;
cin>>a;
int sum=0;
int i=0;
if(a>0){
do{
    sum+=i;
    i++;
}while(a>=i);
cout<<"Sum of first "<<a<<" natural numbers is "<<sum<<endl;
}
else{
    cout<<"Please enter possitive number";
}
    return 0;
}