//#include <???.h> //Author by Quan dep trai
int main()
{
	int a,n;
	scanf("%d",&n);
	
int s=0;
while(n!=0){
	a=n%10;
	n=n/10;
	s=s*10  +a;
} printf("%d",s);
	return 0;
}
