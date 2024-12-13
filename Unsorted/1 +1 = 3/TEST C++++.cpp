//#include <???.h> //Author by Quan dep trai
#include <iomanip>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,y,m,o;	
	printf("Welcome Master \a \n");
	printf("Master hay nhap level (1---9) (LEVEL 1 kho nhat)\n");
	scanf("%d",&a);
  
  
  if(a==1)
	 {
		 printf("EXTREMELY HARD, ARE YOU SURE MASTER?? (1 la ok, 0 la deo) \n") ;
	      		scanf("%d",&b);
				 if(b==1)
	         printf("OK, Let's start SHOOTING \n");
	      else if (b==0){
				  printf("Deo thi chon cm lai de \n");
					scanf("%d",&m);
					a=m;
					}
				 else printf("Deo hieu TIENG NGUOI HA ?? \n"); }
	  else if (a==9) {
	         printf("TOO EZ ,Do u want make some change to another level (1 la ok, 0 la deo)  ");         
							   scanf("%d",&y);
	               if (y==1){
	               printf("Chon Level ban muon ??? \t");
	               scanf("%d",&m);
	               a=m;
	               printf("OK, Let's go \n");
	               }
	               else if(y==0) printf("OK THAT FINE \n");
	               else printf("Deo hieu TIENG NGUOI ?? \n");
							}
       else printf("OK that Fine =))) \n");	

  printf("SHOTING XIN DC BAT DAU \n ");
  
  int d,e,f,i,x,c,z;
  d=0;
  e=101;
  c=50;
  while(a<10)
  {
  	c+=13;
    ++d;
    --e;
    f=c+d*e;
    a=a+1;
    tinh: printf("    %d + %d x %d = ",c,d,e);
    scanf("%d",&i);
    if(i==f)
      printf(" Chuan CMNR \n \n");
    else {
		printf(" DM ngu vl -_- ??? TRY AGAIN \n \n");
		goto tinh;
		}
		
    switch(a){
		 case 7: printf(" BOSS1 : Quang duong AB dai 123km, Quan DZ di tu A->B vs v=67km/h ::: Oishiro di tu B->A vs v=56km/h \n\t Hoi sau chinh xac bao lau 2ng gap nhau??? (Don vi hours)\t");
		  back1: scanf("%d",&o);
		  if(o==1){
		    printf("\t Good job..Keep going \n\n");
		    }
		  else {
		  	printf("Sai cmnr -_-, Try again  ");
		  	goto back1;
			     }
			}
  }
     printf("FINAL BOSS:: \n");
	   printf("Co 10 cai banh, Moi banh co 2 mat, Co 1 cai chao, ran dc toi da 4 mat/1 phut...Tinh T-min ran xong 10 cai banh \n");
		  back: scanf("%d",&x);
		  if(x==5)
		    printf("You are legendary");
		  else {
		  	printf("Sai cmnr -_-, Try again  ");
		  	goto back;
		       }
  printf("  You have completed level %d...\n\t Congratulation :) ",a-1);
  haha: printf("\n\n\t Nhap code '17101998' de ket thuc :)) \n\t ");
  scanf("%d",&y);
    if(y==17101998)
       printf("\n\t OKKK");
    else goto haha;
  getchar();
	return 0;
}
