#include<iostream>
using namespace std;
int main()
{
	int n, row, col;
	cout<<"enter n";
	cin>>n;
	for(row=0; row<n; row++)
	{
		for(col=0; col<row+1; col++)
		{
		if(col==0 || row==n-1 || col==row)
			cout<<col+1;
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
