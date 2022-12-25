#include<iostream>

using namespace std;

int fact(int a){
	
    if(a>=1){

    return a*fact(a-1);
	
	}
	
	else{
		
		return 1;
	}
}

main(){
	
	int a;
	
	cout<<"Enter No. :- ";
	cin>>a;
	
	int b = fact(a);
	
	cout<<"Factorial :- "<<b;
	
	
	
}
