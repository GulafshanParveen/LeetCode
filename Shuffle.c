#include <stdio.h>
int main(){
	int arr[]={2,5,1,3,4,7};
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++ && n++){
		for(int j=0;j<6;j+=2){
			arr[j]=arr[i];
			arr[j+1]=arr[n];
		}
	}
	for(int i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
