//#include <???.h> //Author by Quan dep trai
 
int main(){
    int n, a=0;
    scanf("%d", &n);
    int sochan=0,sole=0;
    while(n>0){
        a=n%10;
        n=n/10;
        if(a%2==0)
            sochan++;
        else sole++;
    }
    printf("%d %d", sole, sochan);
    return 0;
}
