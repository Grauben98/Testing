#include <iostream>

using namespace std;

void callThisMethod();

int main(){
	
	callThisMethod();
	cout<<"\n";
	
	system("PAUSE");
	return 0;
}

void callThisMethod(){
	cout<<"I'm using a void function."<<endl;
}
