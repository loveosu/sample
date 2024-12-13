//#include <???.h> //Author by Quan dep trai
int MTA(int a[50][50],int n)
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

int tongh(int a[50][50],int n)
{
	int i,j;
	for(i=0;i<n;i++){
		int gth=0;
		for(j=0;j<n;j++){
			gth+=a[i][j];
		}
		printf("%d ",gth);
	}
	printf("\n");
}	

int tongc(int a[50][50],int n)
{ 
	int i,j,gtc;
	for(i=0;i<n;i++){
		int gtc=0;
		for(j=0;j<n;j++){
			gtc+=a[j][i];
		}
		printf("%d ",gtc);
	}
}	

int main()
{	int n;
	scanf("%d",&n);
	int i,j;
	int a[50][50];
	MTA(a,n);
	tongh(a,n);
	tongc(a,n);
	printf("\n");
	return 0;
}

