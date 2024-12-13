//#include <???.h> //Author by Quan dep trai
int nhap(int a[50][50],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
}

int xuly(int a[50][50],int n)
{
	int i,j,min=100,cotmin;
	for(j=1;j<=n;j++){
		int tong=0;
		for(i=1;i<=n;i++){
			tong+=a[i][j];
		}
		if(tong<min)
		{
			min=tong;
			cotmin=j;
		}
	}
	printf("%d\n",cotmin);
	for(i=1;i<=n;i++)
		printf("%d ",a[i][cotmin]);
			
}
int main()
{
	int n;
	int a[50][50];
	scanf("%d",&n);
	nhap(a,n);
	xuly(a,n);
	
	return 0;
}
