#include <iostream>
using namespace std;
int main(){
	int i,max=0,secmax=0;
	int arr[10][20]={2,23,768,7},{2,5,76.98,30};
	for( i =0;i<=4;i++){
		
	    
		if(arr[i]>max){
		secmax = max;
		max=arr[i];
		}
		else if(arr[i]>secmax && arr[i]!=max){
			secmax=arr[i];
		}
	}cout<<max;
	cout<<secmax;
}

