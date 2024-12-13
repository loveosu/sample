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
	int i,j,max,cotmax;
	for(j=1;j<=n;j++){
		int tong=0;
		for(i=1;i<=n;i++){
			tong+=a[i][j];
		}
		if(tong>max)
		{
			max=tong;
			cotmax=j;
		}
	}
	printf("%d\n",cotmax);
	for(i=1;i<=n;i++)
		printf("%d ",a[i][cotmax]);
			
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
