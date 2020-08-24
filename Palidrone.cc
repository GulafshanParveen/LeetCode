#include <iostream>
using namespace std;


bool isPalindrome(int x) {
        int rem,reverse=0,orig;
	if(x<0) return false;
        orig=x;
        while(x!=0){
            rem=x%10;
            reverse=reverse*10+rem;
            x/=10;
        }
        if(orig==reverse){
            return true;
        }else{
            return false;
        }
}
int main(){
	int n;
	cin>>n;
	cout<<isPalindrome(n)<<endl;
	return 0;
}
