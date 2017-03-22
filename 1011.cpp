#include<stdio.h>
int main(){ 
    double a[10],b[10],c[10];
	int i,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    	scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
    	for(i=0;i<x;i++){
	    	if(a[i]+b[i]>c[i])
	    		printf("Case #%d: true\n",i+1);
			else
				printf("Case #%d: false\n",i+1);
		}
    return 0;
}
