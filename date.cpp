#include<iostream>
#include<math.h>

using namespace std;
class date{
	private:
		 int ngay,thang,nam;
	public:
	 date(){
	 	ngay=1;thang=1;nam=1;
	}
	date(int a,int b,int c){
		ngay=a;
		thang=b;
		nam=c;
	}
	~date(){}
	void nhap(){			
		cout<<"Nhap nam:";
		cin>>nam;
		do{
			cout<<"Nhap thang:";
			cin>>thang;
		}while(thang<0||thang>12);
		do{
		if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
			cout<<"Nhap ngay:";
			cin>>ngay;
			cout<<endl;			
	}
}while(ngay<0||ngay>31);
		do{
		
		if(thang==4||thang==6||thang==9||thang==11){
				cout<<"Nhap ngay:";
				cin>>ngay;				
			
		}}while(ngay<0||ngay>30);
		if(thang==2){
			
			
			if(nam%400==0||(nam%4==0&&nam%100!=0)){
				do{
					cout<<"Nhap ngay:";
					cin>>ngay;
		}while(ngay<0||ngay>29);}
			
			else{
				do{
				cout<<"Nhap ngay:";
				cin>>ngay;
		
		}while(ngay<0||ngay>28);}
		
	}}
	void xuat(){
		cout<<"Ngay:"<<ngay;
		cout<<" Thang:"<<thang;
		cout<<" Nam:"<<nam<<endl;
	}	
	date operator ++(){
		date b;
		if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10){
			if(ngay==31){
			ngay=1;
			thang++;
		}else ngay++;
		}
		if(thang==4||thang==6||thang==9||thang==11){
			if(ngay==30){
				ngay=1;
				thang++;
			}else ngay++;
		}
		if(thang==2){
			if(nam%400==0||(nam%4==0&&nam%100!=0)){
				if(ngay==29){
					ngay=1;
					thang++;
				}
				
				else ngay++;
			}
			else{
			if(ngay==28){
				ngay=1;
				thang++;
			}else ngay++;
		}}
		if(thang==12){
			if(ngay==31){
			
			ngay=1;
			thang=1;
			nam++;}
			else ngay++;
		}
	
	
	}
	date operator --(){
		if(thang==2||thang==4||thang==6||thang==9||thang==11){
			if(ngay==1){
				ngay=31;
				thang--;
			}
			else ngay--;
		}
		if(thang==5||thang==7||thang==8||thang==10||thang==12){
			if(ngay==1){
				ngay=30;
				thang--;
			}else ngay--;
		}
		if(thang==3){
			if(nam%400==0||(nam%4==0&&nam%100!=0)){
				if(ngay==1){
					ngay=29;
					thang--;
				}
				
				else ngay++;
			}
			else{
			if(ngay==1){
				ngay=28;
				thang--;
			}else ngay--;
			
		}
	}
	if(thang==1){
		if(ngay==1){
			ngay=31;
			thang=12;
			nam--;
		}
		else ngay--;
	}
}
};
int main(){
	date d,a,b;
	int chon;
	do{
		cout<<"\n1.Nhap ngay thang nam\n";
		cout<<"2.Cong 1 ngay\n";
		cout<<"3.Tru 1 ngay\n";
		cout<<"0.exit\n";
		cin>>chon;
		switch(chon){
			case 1:
				d.nhap();
				d.xuat();
				break;
			case 2:
				cout<<"Cong 1 ngay la:";
				a=d.operator ++();
				d.xuat();
				
				break;
			case 3:
				cout<<"Truoc 1 ngay la:";
				d.operator --();
				d.xuat();
				break;
		}
	}while(chon!=0);
}
