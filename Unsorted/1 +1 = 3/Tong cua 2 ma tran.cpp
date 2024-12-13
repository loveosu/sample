//#include <???.h> //Author by Quan dep trai

int MTA(int a[50][50],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				scanf("%d", &a[i][j]);
		}
}

int MTB(int b[50][50],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				scanf("%d", &b[i][j]);
		}
}
int MTC(int c[50][50],int n,int m)
{	
	int a[50][50];
	int b[50][50];
	MTA(a,n,m);
	MTB(b,n,m);
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
}
int main()
{
	int n,m;
	int a[50][50];
	int b[50][50];
	int c[50][50];
	scanf("%d%d",&n,&m);
	
	MTC(c,n,m);
	
	return 0;
}

