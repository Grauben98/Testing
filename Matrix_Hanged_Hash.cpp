#include <iostream>
#include <cstdlib>

using namespace std;

void walk();

int matrix[3][3][3];
int valorX = 4;
int valorO = 2;

int main(){
	
	walk();
	
	cout<<"\n";
	system("PAUSE");
	return 0;
}

void walk(){
	
		for(int i=0; i<100; i++){
			for(int j=0; j<100; j++ ){
				for(int k=0; k<100; k++){
					//matrix[i][j] = valorX;
				cin.ignore();
				fflush(stdin);	
				matrix[i][j][k] = j+i+k;	
				cout<<matrix[k][j][i]<<" ";
				}
				cout<<endl;
		
			}
		cout<<"\t";	
	}
	
}
