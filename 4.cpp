#include<iostream>

using namespace std;

inline int table(int x){
	
	int i;
	
	for(i=1; i<=10; i++)
			
		cout<<x<<" * "<<i<<" = "<<x*i<<endl;
}

main(){
	
	int a;
	
	cout<<"Type a no. :- ";
	cin>>a;	
	
	table(a);
	
}
