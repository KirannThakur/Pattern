#include<iostream>
using namespace std;
int main()
{
	int n, row, col;
	cout<<"enter n";
	cin>>n;
	for(row=0; row<n; row++)
	{
		for(col=0; col<n-row; col++)
		{
		if(col==0 || row==0 || col==n-row-1 )
			cout<<"*";
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
