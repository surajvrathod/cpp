#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
int row,col;
cout<<"Please Enter number of rows and col"<<endl;
cin>>row>>col;
cout<<"The number of rows you entered are "<<row<<endl;
/*
for (int i = 1; i <=row; i++)
{
  for (int j = 1; j<=col; j++)
  {
    if (j==1 || i==1 || i==row ||j==col)
    {
        cout<<" *";
    }
    else{
        cout<<"  ";
    }
  }
  cout<<endl; 
}
for (int i =row; i >=1; i--)
{
    for (int j = 1; j <=i; j++)
    {
       cout<<" *";
    } 
    cout<<endl;
}
for (int  i = 1; i <=row; i++)
{
  for (int j = 1; j<=row; j++)
  {
    if (j<=row-i)
    {
     cout<<"  ";
    }
    else{
      cout<<" *";
    }
    
  }
  cout<<endl;
  
}
*/
for (int i = 1; i <=row; i++)
{
 for (int j = 1; j <=i; j++)
 {
cout<<i<<" ";
 }
 cout<<endl;
 
}
int count=1;
for (int i = 1; i <=row; i++)
{
 for (int j = 1; j <=i; j++)
 {
cout<<count<<" ";
count++;
 }
 cout<<endl;
 
}



        return 0;
}
