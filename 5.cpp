#include<iostream>
using namespace std;
int main()
{
  int row, col, n;
  cout<<"enter n\n";
  cin>>n;
  for(row=0; row<n; row++)
  {
    for(col=0; col<n-row; col++)
    {
      cout<<" ";
    }
    for(col=0; col<row+1; col++)
    {
      cout<<row+col+1;
    }
    int a=2*row;
    for(col=0; col<row; col++)
    {
      cout<<a;
      a=a-1;
    }
    cout<<endl;
  }
}