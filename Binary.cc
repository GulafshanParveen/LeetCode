#include <iostream>
#define SIZE 32
using namespace std;

void Binary(int n){
	int  result[SIZE];
	int i=0;
	while(n>0){
		result[i]=n%2;
		n=n/2;
		i++;
	}
		if(result[i]!=result[i+1]){
			cout<<"true";
		}
		else{
			cout<<"false";
		}

}
int main(){
	int n=7;
	Binary(n);
	return 0;
}
