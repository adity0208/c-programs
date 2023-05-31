#include<stdio.h>
void Soe(int n)
int i,j;
int prime[n+1];
for(i=0;i<n;i++){
	prime[i]=1;
	for(i=0;i<n;i++){
		for(j=i+1;j<n+1;i++){
			if(prime[i]==1){
				if(j%i==0)
				prime[i]=0;
			}
		}
		
	}
	for(i=2;i<=n;i++){
		if(prime[i]==1)
		printf("%d",prime[i]);
	}
	void main();
	
}