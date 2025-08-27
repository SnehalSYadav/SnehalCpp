#include<iostream>
using namespace std;
int main(){
	int i,j,row=4;
	int col=9;
	for(i = row;i>=0;i--){
		for(int s=0;s<i;s++){
			cout<<" ";
		}
		for(j =0;j<col;j++){
			cout<<"*";
		}
		col--;
		col--;
		cout<<endl;
	}
}
