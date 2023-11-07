#include<iostream>
using namespace std;

int main(){
	
	int myArray1[10] = {-1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 1; i < 5; i++){
		int k = i*2;
		cout<<myArray1[i]<<" "<<myArray1[k]<<" "<<myArray1[k + 1]<<endl;
	}
	return 0;
}
