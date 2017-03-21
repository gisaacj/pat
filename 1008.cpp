#include<stdio.h>
#define MAX 100
int main(){
	int a[MAX],m=0,n,i,j,k,d,x;
	scanf("%d %d",&n,&d);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	k=i;
		do{
		j=i;
		x=a[(i+n)%n];
		do{
			a[(i+n)%n]=a[(i+n-d)%n];
			i=(i+n-d)%n;
			m++;
		}while((j+d)%n!=i);
		a[i]=x;
		i++;
	}while(m<n-1&&k!=i%n);
	for(i=0;i<n;i++)  
        printf("%d%s",a[i],(i-n+1?" ":"\n"));  
	return 0;
}
