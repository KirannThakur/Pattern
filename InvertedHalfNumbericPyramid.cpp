#include<iostream>
using namespace std;
int main()
{
  int row, col, n;
  cout<<"enter n \n";
  cin>>n;
  for(row=0; row<n; row++)
  {
    for(col=0; col<n-row; col++)
    {
      cout<<col+1;
    }
    cout<<endl;
  }
}