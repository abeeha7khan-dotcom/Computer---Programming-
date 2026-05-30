#include<iostream>
using namespace std;

int getSquare(int number);

int main(){
	
	getSquare(8);
	
}

int getSquare(int number){
	int square;
	square=number*number;
	cout<<"The square is:   "<<square<<endl;
}