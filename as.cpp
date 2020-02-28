#include<iostream>
#inlcude<fstream.h>
#include<windows.h>
#include<string.h>
using namespace std;
int s[10],a[10],q[10],z;
char foodname(int n)
{  char k[20];
if(n==2)
{
	strcpy(k,"MALAI  KOFTA   ");
}
else if(n==1)
{
	strcpy(k,"PANEER LABABDAR");
}
else if(n==4)
{
	strcpy(k,"TANDOORI  CHAAP");
}
else if(n==5)
{
	strcpy(k,"SOYA  CHAAP    ");
}
else if(n==3)
{
	strcpy(k,"VEG BIRYANI    ");
}
else if(n==6)
{
	strcpy(k,"MIX VEGETABLE  ");
}
else if(n==50)
{
	strcpy(k,"TANDOORI ROTI  ");
}
else if(n==30)
{
	strcpy(k,"BUTTER NAAN    ");
}
else if(n==7)
{
	strcpy(k,"JEERA RICE     ");
}
else if(n==10)
{
	strcpy(k,"GULAB JAMUN    ");
}
cout<<k;
}


void bill()
{   cout<<"                                    MENU                                     "<<endl;
    cout<<"Item Code=1        Name Of Product=Paneer Lababdar       Rate Of Product=110"<<endl;
    cout<<"Item Code=2        Name Of Product=Malai Kofta           Rate Of Product=150"<<endl;
    cout<<"Item Code=3        Name Of Product=Veg Biryani           Rate Of Product=170"<<endl;
    cout<<"Item Code=4        Name Of Product=Tandoori Chaap        Rate Of Product=140"<<endl;
    cout<<"Item Code=5        Name Of Product=Soya Chaap            Rate Of Product=180"<<endl;
    cout<<"Item Code=6        Name Of Product=Mix Vegetable         Rate Of Product=130"<<endl;
    cout<<"Item Code=7        Name Of Product=Jeera Rice            Rate Of Product=110"<<endl;
    cout<<"Item Code=50       Name Of Product=Tandoori Roti         Rate Of Product=10"<<endl;
    cout<<"Item Code=30       Name Of Product=Butter Naan           Rate Of Product=16"<<endl;
    cout<<"Item Code=10       Name Of Product=Gulab Jamun           Rate Of Product=30"<<endl;

}
int foodrate(int n)
{  int k;
if(n==1)
{
	k=110;
}
else if(n==2)
{
	k=150;
}
else if(n==3)
{
		k=170;
}
else if(n==4)
{
		k=140;
}
else if(n==5)
{
		k=180;
}
else if(n==6)
{
	k=130;
}
else if(n==7)
{
	k=110;
}
else if(n==50)
{
		k=10;
}
else if(n==30)
{
		k=16;
}
else if(n==10)
{
	k=20;
}
return k;
}
void finalbill(int n,int k,int l)
{
a[k]=n;
s[k]=foodrate(n);
q[k]=l;
}

class restaurent
{   char cname[20];
    double cnum;
    int itemcd;
	int unit;
	float total;
	float bill;
	char pay[20];
public:
	void enterbill();
	void billing();

};
void restaurent::enterbill()
{float t=0;
char o='Y';
int j=0;
		cout<<"                           Enter Customer Name=";cin.getline(cname,20,'.');
		cout<<endl;
		cout<<"                           Enter Customer Number=";cin>>cnum;
		cout<<endl;
		
			cout<<"                           Enter Product Code=";cin>>itemcd;
			cout<<endl;
	        cout<<"                Rate of product="<<foodrate(itemcd)<<"        ";
			cout<<"Enter No Of Units=";cin>>unit;
			cout<<endl;
			finalbill(itemcd,j,unit);
			j++;
			z=j;
	
		bill=t;

	}
	void restaurent::billing()
	{
	cout<<"Enter Payment method ";cin.getline(pay,20,'.');
	cout<<"Please Wait"<<endl;
Sleep(2000);
	cout<<"Please Wait"<<endl;
Sleep(2000);
	cout<<"Please Wait"<<endl;
Sleep(2000);
	cout<<"Payment Received"<<endl;

	}
	void bill90(int k)
	{int n=0;
	Sleep(2000);
	cout<<"                                       YOUR BILL                                      "<<endl;
	    for(int i=0;i<k;i++)
	    {
	     cout<<"NAME OF PRODUCT              ITEM CODE              rate of product       "<<endl;
	    cout <<foodname(a[i])<<"                 "<<a[i]<<"                     "<<s[i]<<endl;

	n+=s[i]*q[i];
	}
        cout<<"                                       TOTAL="<<n<<endl;
        cout<<"                                THANK YOU VISIT AGAIN!"<<endl;



	}
	void bill()
{ofstream f1;
f1.open("bill.dat",ios::binary)
char ch="Y";
cout<<"PRESS Y TO BILL";cin>>ch;
while(ch=="Y")
{
	enterbill();
	f1.write((char*)&r1,sizeof(r1)));
}
	
}

	int main()
	{
	    restaurent r1;
	int n,m;
		cout<<"                           WELCOME TO NAZAM FOODS"<<endl;
		bill();
		cout<<"                           Enter User Id=";cin>>n;
		cout<<"                           Enter Password= ";cin>>m;
		if(m==100020)
		{ r1.enterbill();
		r1.billing();

		}
		bill90(z);

	}


