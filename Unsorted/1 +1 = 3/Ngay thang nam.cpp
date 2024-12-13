#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int ngay,thang,nam;
  cin>>ngay>>thang>>nam;
  
  if(thang>1 && thang<12){    
			switch(thang){  
					case 1 : 
            case 3 :
            	case 5 :
            		case 7 :
            			case 8 :
            				case 10 :
            					case 12 : if(ngay<=31) 
            						cout<<"Ngay hop le"; 
            						        else 	cout<<"Nhap sai cmnr";
																goto zo;										
            						case 4 : 
            							case 6 :
            								case 9 :
            									case 11 : if(ngay>=31) 
																             cout<<"Nhap sai cmnr";
																        else cout<<"Ngay hop le";
																        goto zo;
																        														        
															case 2 :  if (nam%400==0 || nam%4==0 && nam%10!=0){
														                       if(ngay<=29)
															                   	cout<<"Ngay hop le";           											           
																				       else cout<<"Nhap sai cmnr";
																				       }
															          else if(ngay<=28)
															                   	cout<<"Ngay hop le";           											           
																				       else cout<<"Nhap sai cmnr";																				       															             																							     																         															            										   																				      										                    															               																                                                         
	 }
}
  else cout<<"Nhap sai cmnr";
  
                                       zo :   if (nam%400==0 || nam%4==0 && nam%10!=0)
															                   	cout<<"\n Nam nhuan";           											           
																				      else cout<<"\nNam khong nhuan"; 	
  
	return 0;
}
