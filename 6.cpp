#include<iostream>
using namespace std;
int main()
{
  int row, col, n;
  cout<<"enter n\n";
  cin>>n;
  for(row=0; row<n; row++)
  {
    for(col=0; col<row+1; col++)
    {
      int a= col+1;
      char ch=a+'A'-1;
      cout<<ch;
    }
  
    for(col=row; col>=1; col--)
    {
int a= col;
      char ch=a+'A'-1;
      cout<<ch;
    }
    cout<<endl;
  }
}