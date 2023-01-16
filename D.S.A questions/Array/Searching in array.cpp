#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter number of elements you want to enter in array: ";
	cin >> a;
	int arr[a],i,n,c = 0;
	cout << "Enter data in arry-- " <<endl;
	for(i=0;i<a;i++)
	{
		cin >> arr[i];
	}

	cout << "Enter data you want to find: ";
	cin >> n;

	for(i=0;i<a;i++)
	{
		if(arr[i] == n)
		{
		cout << "Data found";
		c++;
		}
	}
	if(c == 0)
	cout << "Data not found";
    
}
