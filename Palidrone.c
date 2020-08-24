#include <iostream>
using namespace std;

int main(){
	int n,rem,orig,rev=0;
	cin>>n;
	orig=n;

	//reverse integer and stored in reverse
	while(n!=0){
		rem=n%10;	//we get 1 then...
		rev=rev*10+rem;		//add 0*10+1
		n/=10;		//here n=12
	}
	if(orig==rev){
		cout<<"Palidrone"<<endl;
	}else{
		cout<<"Not palidrone"<<endl;
	}
	return 0;
}
