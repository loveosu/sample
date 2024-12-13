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

int MTB(int a[50][50],int b[50][50],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
}

int MTC(int a[50][50],int b[][50],int c[50][50],int n,int m)
{
	int i,j,k;
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			for (k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
}

int main()
{
	int i,j,n,m;
	int a[50][50];
	int b[50][50];
	int c[50][50];
	scanf("%d%d",&n,&m);
	MTA(a,n,m);
	MTB(a,b,n,m);
	MTC(a,b,c,n,m);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("%d ",c[i][j]);
		}
		printf("\n");
  }
return 0;
}
