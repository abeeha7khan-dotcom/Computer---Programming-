#include<iostream>
using namespace std;
int main(){
	int num, sum = 0;
	cout<<"enter a positive integer"<<endl;
	cin>>num;
	
	for(int i=1; i<=num; i++){
		sum= sum + i;
	}
	cout<<"sum is  "<<sum;
	return 0 ;
}