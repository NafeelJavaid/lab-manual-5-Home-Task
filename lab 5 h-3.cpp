#include<iostream>
using namespace std;
int main()
{ int i,r,s,x;
	cout<<" Enter the number of rows: ";
	cin>>r;
	s=r-1;
	for(i=1;i<=r;i++){
		for( x=1;x<=s;x++)
		cout<<" ";
		s--;
		for(x=1;x<=(2*i-1);x++)
			cout<<"*";
			cout<<endl;
	}
		s=1;
	for(i=1;i<=(r-1);i++){
		for(x=1;x<=s;x++)
				cout<<" ";
			s++;
		for(x=1;x<=(2*(r-i)-1);x++)
			cout<<"*";
			cout<<endl;
		}
		cout<<endl;
	return 0;
}