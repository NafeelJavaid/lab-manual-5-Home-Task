#include<iostream>
using  namespace std;
int main() {
	int a,b,c,x,y,z,l;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	x=2;
	c=0;
	y=a;
	z=b;
	while(x<=b){
		if(a%x==0 && b%x==0){
			c+=x;
			a=a/x;
			b=b/x;
		}
		else {
			x++;
		}
	}
		l=(y*z)/c;
		cout<<"The HCF of the numbers is: "<<c<<endl;
		cout<<"The LCM of numbers is: "<<l<<endl;
	return 0;
	
}