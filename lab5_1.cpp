#include<iostream>
using namespace std;

int main()
{
 	int even=0;
    int odd=0;
    int num = 1;
    while(num!=0)
    { 
        cout << "Enter an integer: ";
        cin >> num;
        if(num%2==0 )
		{
			if(num !=0)
        	{
            even++;
        	}
		}
        
        else
        {
            odd++;
        }
    }
    cout << "#Even numbers = " ;	
    cout << even << "\n";
    cout << "#Odd numbers = ";	
    cout << odd;

    return 0;
}