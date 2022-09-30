#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int row,col;
   cout<<"Please enter row and columns"<<endl;
   cin>>row>>col;
   cout<<"You have entered "<<row<<" rows and "<<col<<" columns"<<endl;
  
 for (int i = row; i>=1; i--)
   {
    for (int j =1; j<=i; j++)
    {
       cout<<j<<" ";
    }
    cout<<endl;
   }
    for (int i =1; i<=row; i++)
   {
    for (int j =1; j<=i; j++)
    {
       if ((i+j)%2==0)
       {
       cout<<"1 ";
       }
       else{
        cout<<"0 ";
       }
    }
    cout<<endl;
   }
   for (int i = 1; i <=row; i++)
   {
    for (int j = 1; j <=row-i; j++)
    {
       cout<<" ";
    }
    for (int j = 1; j <=row; j++)
    {
      cout<<" *";
    }
    cout<<endl;
   }
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j<=row-i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <=i; j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
        
    }

for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j<=row-i; j++)
        {
            cout<<"  ";
        }
        for (int j = i; j >1; j--)
        {
           cout<<j<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j<=row-i; j++)
        {
            cout<<"  ";
        }
        for (int j =1; j<=2*i-1; j++)
        {
           cout<<"* ";
        }
        cout<<endl;
}
for (int i = row; i >=1; i--)
    {
        for (int j = 1; j<=row-i; j++)
        {
            cout<<"  ";
        }
        for (int j =1; j<=2*i-1; j++)
        {
           cout<<"* ";
        }
        cout<<endl;
}
for (int i = 1; i <=3; i++)
{
   for (int j= 1; j<=row; j++)
   {
      if((i+j)%4==0 || i==2&&j%4==0){
         cout<<"* ";
      }
      else{
         cout<<"  ";
      }
   }
   cout<<endl;
   
}


    return 0;
}
