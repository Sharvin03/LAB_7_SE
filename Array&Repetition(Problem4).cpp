#include<iostream>
using namespace std;

int main(){
	int arr1[5][5];
	
	for (int i = 0; i < 5 ; i++){
		if (i%2 == 0){
			for (int j = 0; j < 5; j++){
				if (j%2 == 0){
					arr1[i][j] = 1;
				}
				else{
					arr1[i][j] = 0;
				}
			}
		}
		else{
			for (int j = 0; j < 5; j++){
				if (j%2 == 0){
					arr1[i][j] = 0;
				}
				else{
					arr1[i][j] = 1;
				}
			}
		}
	}
	
	for (int i = 0; i < 5 ; i++){
		for (int j = 0; j < 5; j++){
			cout<<arr1[i][j]<<"\t";
		}
	cout<<endl;
	}
	
	
	return 0;
}
