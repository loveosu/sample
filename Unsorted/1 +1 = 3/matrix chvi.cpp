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

int chvi(int a[50][50],int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}

int main()
{
	int a[50][50];
	int n;
	scanf("%d",&n);
	MTA(a,n);
	chvi(a,n);
	return 0;
}
