#include<iostream>
using namespace std;

char printO(int a,int b){
	if(a <=0 || b <=0){
		cout << "Invalid input\n";
	}else{
		for(int i=0; i<a ;i++){
			for(int j=0; j<b; j++){
			cout << 'O';
		}
		cout << "\n";
		}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";

	printO(7, 0);
	cout << "\n";
	
	return 0;
}
