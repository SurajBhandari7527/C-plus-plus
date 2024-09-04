#include<iostream>
using namespace std;
void print(int *n){
	*n=10;
	cout<<"the value is: "<<*n<<endl;
	
}
int main(){
	int n,i;
	cout<<"enter a number";
	cin>>n;
	int *ptr=&n;
	print(ptr); //pass by reference
	return 0;
}
