//#include <???.h> //Author by Quan dep trai
int main()
{
	int n,a;
	scanf("%d",&n);
	a=n%10;
	
	while(n!=0)
	{
	n=n/10;
	if(0<n && n<10) break;
	
	}
	printf("%d %d",n,a);
	
	
	return 0;
}
