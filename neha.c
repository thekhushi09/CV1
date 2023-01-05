#include<stdio.h>
 int main()
 {
 	int a, b,c ;
 	scanf("%d%d",&a,&b);
 	printf("%d %d\n",a,b);
 	c=a;
 	a=b;
 	b=c;
 	printf("%d %d",a,b);
 	 return 0;
 }
