//#include <???.h> //Author by Quan dep trai

int MTA(int a[50][50],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

int MTB(int b[50][50],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
}

int MTC(int a[50][50],int b[50][50],int ab[50][50],int n,int m)
{
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
			ab[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}
int main()
{
		int n,m,i,j;
	int a[50][50],b[50][50],ab[50][50];
	scanf("%d%d",&n,&m);
	MTA(a,n,m);
	MTB(b,n,m);
	MTC(a,b,ab,n,m);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ",ab[i][j]);
	printf("\n");
	}
	return 0;
}	
