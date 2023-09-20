#include<stdio.h>
void main(){
	int n,i=1,ans=1;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	while(i<=n){
		ans=i*ans;
		i=i+1;
	}
	printf("ans:%d",ans);
}
