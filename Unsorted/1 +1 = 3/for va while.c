#include <stdio.h>

int test(int n,int a)
{
	if(a==7){
		scanf("%d",&n);
	}	
	return n;
}

int test1(int n)
{
	  int a;
    printf("%d\n",test(n,a));
    if (n==30)
    printf("TING TING");
  else printf("TING  222 TING");
}

int main()
{
  int n;
  int a;
  scanf("%d",&a);
  test(n,a);
  test1(n);
  
	return 0;
}

//spoj ptit problem
