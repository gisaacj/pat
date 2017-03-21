#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n,m;
	char a[80],b[80];
	char *p;
	gets(a);
	p=a;
	j=0;
	for(n=0;n<strlen(a);n++,p++){
		if(*p==' ')
			j++;
		i++;
		b[j]=i;
	}
	for(n=j;n>0;n--){
		for(m=b[n-1]+1;m<b[n];m++)
			printf("%c",a[m]);
			printf(" ");
		}
		for(m=0;m<b[0];m++)
			printf("%c",a[m]);
}
