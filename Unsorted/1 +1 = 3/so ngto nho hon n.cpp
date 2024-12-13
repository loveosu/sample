//#include <???.h> //Author by Quan dep trai
int soNT(int n);
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(n%i==0)
		{
			if(soNT(i)==1)
			{
				printf("%d",i);
			}
		}
	}
}
int soNT(int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	return 1;
	else
	{return 0;}
	
}	
	

