#include<iostream>
#include<string>

using namespace std;

int main()
{
	string text1;
	string text2;
	int n,count;
	cout<<"Enter the first text: ";
	cin>>text1;
	cout<<"Enter the second text: ";
	cin>>text2;
	cout<<"Enter N: ";
	cin>>n;
	count = 0;
	while(count<n)
	{
		if(count%2==0)
		{
			cout<<text1<<" ";
		}
		else
		{
			cout<<text2<<" ";
		}
		count++;
	}
		
}