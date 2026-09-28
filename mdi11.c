// 1+2+4+7+11.....upto n terms wap in c to calculated the sum of the given number
#include<stdio.h>
int main() {
	int n,s,p=1;
	int i=1;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	
	while(i<=n) {
		s+=p;
		p+=i;
	    i++;
  }
	  
	  printf("%d is the sum: ",s);
	  
	  return 0;
}
