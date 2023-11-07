#include<iostream>
using namespace std;


int main(){
	int numOfElm;
	cout<<"Enter Number of Elements in Array: "; cin>>numOfElm;
	int arr[numOfElm];
	//Input Array Values
	for(int i = 0; i < numOfElm; i++){
		cout<<"Enter Value for ["<<i+1<<"]: "; cin>>arr[i];
	}
	//Output Array Values
	for(int l = 0; l < numOfElm; l++){
		cout<<arr[l]<<"\t";
	}
	//Arrange elements in array according to descending order.
	for(int j = 0; j < (numOfElm - 1); j++){
		for(int k = 0; k < (numOfElm - j - 1); k++){
			if(arr[k] < arr[k + 1]){
				int temp = 0;
				temp = arr[k+1];
				arr[k+1] = arr[k];
				arr[k] = temp;
			}
		}
	}
	
	cout<<"\nArray arranged in Descending Order"<<endl;
	for(int m = 0; m < numOfElm; m++){
		cout<<arr[m]<<"\t";
	}
	
	return 0;
}
