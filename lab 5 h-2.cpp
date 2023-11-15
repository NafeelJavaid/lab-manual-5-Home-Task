#include<iostream>
using namespace std;
int main()
{
	int a,d,n,sum;
	cout<<"Enter the value of first term: ";
	cin>>a;
	cout<<"Tell the common difference: ";
	cin>>d;
	cout<<"Tell the number of terms: ";
	cin>>n;
	sum=(n/2)*(2*a+(n-1)*d);
	cout<<" The sum of arithematic progression is: "<<sum;
	return 0 ;
}
