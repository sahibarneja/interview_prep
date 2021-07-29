#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int row=0;
	while(row++<n)
	{	int column=1;
		if(row%2!=0)   //Row Number is even
		{
			while(column<=row)
			{
				cout<<1;
				column++;
			}
		}
		else		//row is odd
		{
			cout<<1;
			while(column<=row-2)
			{
				cout<<0;
				column++;
			}
			cout<<1;
		}
	cout<<endl;}
	return 0;
}
