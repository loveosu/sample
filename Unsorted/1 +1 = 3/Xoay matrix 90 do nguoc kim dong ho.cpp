//#include <???.h> //Author by Quan dep trai

int MTA(int a[50][50],int n)
{
	int i,j;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
}

int xoay(int a[50][50],int n)
{
	int i,j;
	for (i=n-1; i>=0; i--){
		for (j=0; j<n; j++){
			printf("%d ",a[j][i]); 
		}
		printf("\n");
	}
}

int main(){
int n;
int a[50][50];
scanf("%d",&n);
 MTA(a,n);
 xoay(a,n);
return 0;
}
