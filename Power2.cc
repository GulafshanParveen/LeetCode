#include <iostream>
#include <bitset>
using namespace std;
bool Power(int n);

int main(){
	int n;
	cin>>n;
	Power(n)?cout<<"true":cout<<"false";
	return 0;
}
bool Power(int n){
	if(n<=0) return 0;
		if(n&(n-1)!=0)return 0;
	return 1;
}
