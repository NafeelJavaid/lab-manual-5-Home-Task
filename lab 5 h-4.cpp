#include<iostream>
using namespace std;
int main()
{
	int x,y,z(1),dec,a(0);
	cout<<"Enter the number in decimal system: ";
	cin>>dec;
	if(dec==0){
		a=dec;
	}
	else{
	
	while(dec>0){
		x=dec%2;
		dec=dec/2;
		y=x*z;
		z*=10;
		a=a+y;
		}
   }    cout<<"The number in binary system is: "<<a<<endl;
    return 0;
}