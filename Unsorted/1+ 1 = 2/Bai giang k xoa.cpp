#include <iostream>
#include<conio.h>
using namespace std;

void Welcome()
{
	 cout<<"\t GAMEvui.com \n \n";
	 cout<<"Welcome Master \a \n";
	 cout<<"Master hay nhap level game (1---9) (LEVEL 9 kho nhat)\n"; 
}	

void Level(int a,int *a1)
{
	int b,y,o;
	cin>>a;
	if(a==9)
	{
		cout<<"EXTREMELY HARD, ARE YOU SURE MASTER?? (1 la ok, 0 la deo) \n";
		cin>>b;
	    if(b==1){
		  cout<<"OK, Let's start \n";
		  *a1=a;
		  }
		   else if(b==0){
		   	  cout<<"Deo thi chon cm lai de \n";
		   	  cin>>*a1;
			  }  
			  else{
				     cout<<"Deo hieu TIENG NGUOI HA ?? \n";
			       *a1=a;
				    } 
  } 
       
  else if(a==1)
	{
  	cout<<"TOO EZ ,Do u want make some change to another level (1 la ok, 0 la deo)  ";
  	cin>>y;
	        if(y==1){
	        	cout<<"Chon Level ban muon ??? \t";
	        	cin>>*a1;
	        	cout<<"OK, Let's go \n"; 	
					        }
					else if(y==0){
					  cout<<"OK THAT FINE \n";
					   *a1=a;
					   }
					    else {
					    	cout<<"Deo hieu TIENG NGUOI ?? \n"; 
							  *a1=a;
							}
  }
  else{
	        cout<<"OK that Fine =))) \n"; 
					*a1=a;
				}
  cout<<"GAME XIN DC BAT DAU \n ";
}

void Run(int a1)
{
	int d,e,f,i,x,c,z,o;
	d=0;
  e=102;
  c=37;
  z=0;

  while(a1>0)
  {
  	c+=13;
  	z++;
    d+=1;
    e=e-2;
    f=c+d*e;
    a1--;
    cout<<"Level "<<z<<" -_- \n";
    tinh : cout<<"\t"<<c<<" + "<<d<<" x "<<e<<" = ";
    cin>>i;
    if(i==f)
      cout<<" Chuan CMNR \n Level "<<z<<" completed \n\n\n";
    else {
		  cout<<" DM ngu vl -_- ??? TRY AGAIN \n \n";
		goto tinh;
		}
		
		switch(a1){
		 case 3: cout<<" BOSS1 : Quang duong AB dai 123km, Quan DZ di tu A->B vs v=67km/h ::: Oishiro di tu B->A vs v=56km/h \n\t Hoi sau chinh xac bao lau 2ng gap nhau??? (Don vi hours)\t";
		  back1: cin>>o;
		  if(o==1){
		    cout<<"\t Good job..Keep going \n\n";
		      }
		  else {
		  	cout<<"Sai cmnr -_-, Try again  ";
		  	goto back1;
			     }
			}					
  }	
}


void Final(int a1)
{
	 int x,y;
	 cout<<"FINAL BOSS:: \n";
	 cout<<"Co 10 cai banh, Moi banh co 2 mat, Co 1 cai chao, ran dc toi da 4 mat/1 phut...Tinh T-min ran xong 10 cai banh \n";
	 back : cin>>x;
	 if(x==5)
		    cout<<"You are legendary";
	 else {
		  	cout<<"Sai cmnr -_-, Try again  ";
		  	goto back;
		    }
		    
	  cout<<"  You have completed level "<<a1 <<"...\n\t Congratulation :) ";
  haha: cout<<"\n\n\t Nhap code '17101998' de ket thuc :)) \n\t ";
  cin>>y;
    if(y==17101998)
       cout<<"\n\t OKKK\n\n";
    else goto haha;
}

void Boss2()
{
    int d,e=3;
    for(int n=1;n<=3;n++){
    	e--;
    	cout<<"Bai di leo nui...Xuat phat tu sang ngay thu nhat..Biet rang sang Bai di dc 25m va toi bi tut xuong 15m...\n Quang duong dai 105m..Hoi ngay bao nhieu Bai den dc dich??  ";
    	haha1: cin>>d;
    	if(d==9){
    	  cout<<"\nEZ game... ";
    	  break;
    	}
    	else {
    		cout<<"\t\nDm ngu vklll -_- \n\t Chau con "<<e<<" lan nhap lai..\n";
    	}
		}
}

int main()
{
  int a;
  int *a1;
  Welcome();
  Level(a,a1);
  Run(*a1);
  Final(*a1);
  Boss2();
  
  getchar();
	return 0;
}
