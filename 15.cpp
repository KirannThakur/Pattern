#include<iostream>
using namespace std;
int main()
{
	int n, row, col;
	cout<<"enter n";
	cin>>n;
	for(row=0; row<n; row++)
	{
		for(col=row+1; col<=n; col++)
		{
			if(col==row+1 || col==n || row==0)
			{
			
		cout<<col;
		}
		else
		{
			cout<<" ";
		}
		}
		cout<<endl;
	}
}
