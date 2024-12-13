//#include <???.h> //Author by Quan dep trai

int MTA(int a[50][50],int n)
{
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
}

int xoay180(int a[50][50],int n)
{
	int i,j;
	for(i=n-1; i>=0; i-- ){
		for(j=n-1; j>=0; j--){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[50][50];
	MTA(a,n);
	xoay180(a,n);
	return 0;
}

