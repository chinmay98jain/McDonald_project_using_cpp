#include<fstream.h>
#include <iostream.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>
int sum=0;
int neww;
int da;
class mcds
{
/////////////////////////////////////////////////////////////////////////
	private:
	char ch,cha;
	int n,b,p,be,i,q1;
	friend void date();
     friend void time();
	void wrong();
/////////////////////  FOR SUB-MENUS DISLAY  ////////////////////////////
	void snacks();
	void pizza();
	void beverages();
	void icecream();
	void mode();
///////////////////////  FOR BILL CALCULATION  //////////////////////////
	void bsnacks(int,int);
	void bpizza(int,int);
	void bbeverages(int,int);
	void bicecream(int,int);
/////////////////////////////////////////////////////////////////////////
	public:
	void replica();
	void maindisplay();
	void display();
	void last();
	void bill();
/////////////////////////////////////////////////////////////////////////
}p;
int s=0;
///////////////////////////  SNACKS  ///////////////////////////////
void mcds::snacks()
{
	do{
		clrscr();
		gotoxy(15,8);
		cout<<"``````````````````````````````````````````````";
		gotoxy(5,5);
		date();
		gotoxy(70,5);
		time();
		gotoxy(30,10);
		cout<<"========";
		gotoxy(30,11);
		cout<<" SNACKS";
		gotoxy(30,12);
		cout<<"========";
		gotoxy(17,15);
		cout<<"1. McAloo Tikki\t       Rs. 30\n\n\t\t2. McVeggie\t\t Rs. 35\n\n\t\t3. McPuff\t\t Rs. 40\n\n\t\t4. McChicken Tikki\t Rs. 50\n\n\t\t0. EXIT";
		gotoxy(15,25);
		cout<<"``````````````````````````````````````````````";
		gotoxy(17,28);
		cout<<"Enter your Choice: ";
		cin>>b;
		if(b==1||b==2||b==3||b==4)
		{
			gotoxy(19,30);
			cout<<"QUANTITY = ";
			cin>>q1;
			bsnacks(b,q1);
			cout<<"\n\n DO U WANT ANYTHING ELSE FROM THIS MENU ????(y/n):  ";
			cin>>cha;
			if(tolower(cha)!='y')
			replica();
		}
		else
		if(b==0)
		replica();
		else
		wrong();
	}while(tolower(cha)=='y');
}
//////////////////////////  PIZZAS    //////////////////////////////
void mcds::pizza()
{
	do{
		clrscr();
		gotoxy(5,2);
		date();
		gotoxy(70,2);
		time();
		cout<<"\t\t\t\t     ========\n";
		cout<<"\t\t\t\t  PIZZAS \n";
		cout<<"\t\t\t\t ========\n\n\n";
		//////////////// VEG PIZZAS  //////////////
		cout<<"\t\t\t ============\n";
		cout<<"\t\t\t  VEGETARIAN \n";
		cout<<"\t\t\t ============\n\n";
		cout<<" 1. Mix VEGETABLE PIZZA\t\t\t\tRs. 200\n\n 2. ONION & CAPCICUM PIZZA\t\t\tRs. 250\n\n 3. EXTRA CHEESE PIZZA\t\t\t\tRs. 350\n\n 4. MIX VEG WITH BABY CORN PIZZA\t\tRs. 370\n\n 5. NUT CRACKER PIZZA\t\t\t\tRs. 400\n\n";
		/////////////// NON VEG PIZZAS  //////////////
		cout<<"\t\t\t================\n";
		cout<<"\t\t\t NON VEGETARIAN \n";
		cout<<"\t\t\t================\n\n";
		cout<<" 6. MIX KABAB PIZZA\t\t\t\tRs. 200\n\n 7. NON VEG ONION & CAPCICUM\t\t\tRs. 250\n\n 8. GARLIC WITH EXTRA CHEESE PIZZA \t\tRs. 300\n\n 9. MUSHROOM PIZZA\t\t\t\tRs. 370\n\n10. NON VEG CONNIZA\t\t\t\tRs. 400\n\n 0. EXIT";
		cout<<"\n\n\n\nEnter your Choice: ";
		cin>>p;
		if(p==1||p==2||p==3||p==4||p==5||p==6||p==7||p==8||p==9||p==10)
		{
			cout<<"\n\nQUANTITY = ";
			cin>>q1;
			bpizza(p,q1);
			cout<<"\n\n DO U WANT ANYTHING ELSE FROM THIS MENU ????(y/n):  ";
			cin>>cha;
			if(tolower(cha)!='y')
			replica();
		}
		else
		if(p==0)
		replica();
		else
		if(p>10)
		wrong();
	}while(tolower(cha)=='y');
}
////////////////////////  BEVERAGES  ///////////////////////////////
void mcds::beverages()
{
	do{
		clrscr();
		gotoxy(5,5);
		date();
		gotoxy(70,5);
		time();
		gotoxy(15,8);
		cout<<"```````````````````````````````````````````````````";
		gotoxy(30,10);
		cout<<"===========";
		gotoxy(30,11);
		cout<<" BEVERAGES ";
		gotoxy(30,12);
		cout<<"===========";
		gotoxy(16,15);
		cout<<" 1.  TEA\t\t\t      Rs.20\n\n\t\t2.  ICE TEA\t\t\tRs.30\n\n\t\t3.  LIPTON TEA\t\t\tRs.25\n\n\t\t4.  COLD DRINKS\t\t\tRs.25\n\n\t\t5.  COFFEE\t\t\tRs.20\n\n\t\t6.  BLACK COFFEE\t\tRs.30\n\n\t\t0.  EXIT";
		gotoxy(15,29);
		cout<<"```````````````````````````````````````````````````";
		gotoxy(13,30);
		cout<<"Enter your Choice: ";
		cin>>be;
		if(be==1||be==2||be==3||be==4||be==5||be==6)
		{
			gotoxy(13,32);
			cout<<"QUANTITY = ";
			cin>>q1;
			bbeverages(be,q1);
			cout<<"\n\n DO U WANT ANYTHING ELSE FROM THIS MENU ???? (y/n):  ";
			cin>>cha;
			if(tolower(cha)!='y')
			replica();
		}
		else
		if(be==0)
		replica();
		else
		wrong();
	}while(tolower(cha)=='y');
}
////////////////////////////  ICE CREAM  ///////////////////////////
void mcds::icecream()
{
	do{
		clrscr();
		gotoxy(5,5);
		date();
		gotoxy(70,5);
		time();
		gotoxy(8,8);
		cout<<"```````````````````````````````````````````````````";
		gotoxy(30,10);
		cout<<"============";
		gotoxy(30,11);
		cout<<" ICE CREAMS ";
		gotoxy(30,12);
		cout<<"============";
		gotoxy(9,15);
		cout<<"1. VANILLA CONE\t\t\t\t Rs.12\n\n\t2. CHOCHOLATE CONE\t\t\t Rs.25\n\n\t3. STAWBERRY CONE\t\t\t Rs.20\n\n\t4. SCOOBY SUNDAE\t\t\t Rs.40\n\n\t5. RICH NUTS\t\t\t\t Rs.50\n\n\t6. BLACK CURRENT\t\t\t Rs.60\n\n\t0. EXIT";
		gotoxy(8,29);
		cout<<"```````````````````````````````````````````````````";
		gotoxy(13,32);
		cout<<"Enter your Choice: ";
		cin>>i;
		if(i==1||i==2||i==3||i==4||i==5||i==6)
		{
			gotoxy(13,34);
			cout<<"QUANTITY = ";
			cin>>q1;
			bicecream(i,q1);
			cout<<"\n\n DO U WANT ANYTHING ELSE FROM THIS MENU ????(y/n):  ";
			cin>>cha;
			if(tolower(cha)!='y')
			replica();
		}
		else
		if(i==0)
		replica();
		else
		wrong();
	}while(tolower(cha)=='y');
}
/////////////////////////   MODE  //////////////////////////////////
void mcds::mode()
{
	clrscr();
	gotoxy(15,15);
	cout<<"DO U WANT TO PAY BY CASH OR BY CARD: ";
	gotoxy(15,18);
	cout<<"FOR CASH PRESS 1 AND FOR CARD PRESS 2: ";
	int n;
	cin>>n;
	if(n==1)
	{}
	else
	if(n==2)
	{
		clrscr();
		gotoxy(15,15);
		cout<<"Enter BANKs NAME of which card do u have: ";
		char bnm[70];
		gets(bnm);
		gotoxy(19,18);
		cout<<"Enter USERs NAME: ";
		char unm[50];
		gets(unm);
		gotoxy(19,20);
		cout<<"Enter PASSWORD: ";
		char pass[20];
		for(int a=0;a<6;a++)
		{
			pass[a]=getch();
			cout<<"*";
		}
	}
	else
	if(n!=1&&n!=2)
	{
		gotoxy(18,22);
		cout<<" W R O N G   E N T R Y ! ! ! !";
		getch();
		mode();
	}
}
/////////////////////////   DATE    ////////////////////////////////

void date()
{
   struct date d;
   getdate(&d);
   int y= d.da_year;
   int m= d.da_mon;
   da= d.da_day;
   cout<<da<<"-"<<m<<"-"<<y;
}
/////////////////////////   TIME   ///////////////////////////////////
void time()
{
   struct  time t;
   gettime(&t);
   int h,m,s;
   h=t.ti_hour;
   m=t.ti_min;
   s=t.ti_sec;
   if(h<10)
   cout<<"0"<<h<<":"<<m<<":"<<s;
   else if(m<10)
   cout<<h<<":0"<<m<<":"<<s;
   else if(s<10)
   cout<<h<<":"<<m<<":0"<<s;
   else
   cout<<h<<":"<<m<<":"<<s;
}
///////////////////////  FOR BILL CALCULATION OF SNACKS  //////////////////////////
void mcds:: bsnacks(int b,int q1)
{
	if(b==1)
	{
	s+=(q1*30);
	}
	else
	if(b==2)
	s+=(q1*35);
	else
	if(b==3)
	s+=(q1*40);
	else
	if(b==4)
	s+=(q1*50) ;
}
///////////////////////  FOR BILL CALCULATION OF PIZZAS //////////////////////////
void mcds:: bpizza(int p,int q1)
{
	if(p==1)
	s+=(q1*200);
	else
	if(p==2)
	s+=(q1*250);
	else
	if(p==3)
	s+=(q1*350);
	else
	if(p==4)
	s+=(q1*370);
	else
	if(p==5)
	s+=(q1*400);
	if(p==6)
	s+=(q1*200);
	else
	if(p==7)
	s+=(q1*250);
	else
	if(p==8)
	s+=(q1*350);
	else
	if(p==9)
	s+=(q1*370);
	else
	if(p==10)
	s+=(q1*400);
}
///////////////////////  FOR BILL CALCULATION OF BEVERAGES //////////////////////////
void mcds:: bbeverages(int be,int q1)
{
	if(be==1)
	s+=(q1*20);
	else
	if(be==2)
	s+=(q1*30);
	else
	if(be==3)
	s+=(q1*25);
	else
	if(be==4)
	s+=(q1*25);
	if(be==5)
	s+=(q1*30);
	else
	if(be==6)
	s+=(q1*40);
}
///////////////////////  FOR BILL CALCULATION OF ICE CREAMS //////////////////////////
void mcds:: bicecream(int i,int q1)
{
	if(i==1)
	s+=(q1*12);
	else
	if(i==2)
	s+=(q1*25);
	else
	if(i==3)
	s+=(q1*20);
	else
	if(i==4)
	s+=(q1*40);
	if(i==5)
	s+=(q1*50);
	else
	if(i==6)
	s+=(q1*60);
}
//////////////////////////////////////////////////////////
//	       	//First Display Sheet//                //
/////////////////////////////////////////////////////////
void mcds::display()
{
	clrscr();
	cout<<"\n\n\n\n";
	cout<<"\t\t\t        $$$    $$$\n";
	cout<<"\t\t\t       $$$$$  $$$$$\n";
	cout<<"\t\t\t       $$ $$  $$ $$\n" ;
	cout<<"\t\t\t       $$   $$   $$\n";
	cout<<"\t\t\t       $$        $$\n";
	cout<<"\t\t\t       $$        $$\n";
	cout<<"\t\t\t       $$        $$\n";
	cout<<"\t\t\t       $$        $$\n";
	cout<<"\t\t\t       $$        $$\n";
	gotoxy(20,20);
	char str[]="W E L C O M E  T O  M c D O N A L D S .....";
	gotoxy(17,24);
	for(int i=0;i<44;i++)
	{
		  textcolor(BLUE);
		  cprintf("%c",str[i]);
		  delay(100);
	}
	gotoxy(17,30);
	cout<<" \n P r e s s  A n y  K E Y  to  C o n t i n u e !!!!! ";
	getch();
}
///////////////////////////  MAIN DISPLAY /////////////////////////////////////////
void mcds::maindisplay()
{
	do{
		clrscr();
		cout<<"=============================================================================\n";
		cout<<"\t\t W E L C O M E  T O  M c D O N A N L Ds\n";
		cout<<"=============================================================================\n";
		gotoxy(5,10);
		date();
		gotoxy(70,10);
		time();
		gotoxy(30,14);
		cout<<"----------------------";
		gotoxy(30,15);
		cout<<" C H O I C E  M E N U ";
		gotoxy(30,16);
		cout<<"----------------------";
		gotoxy(33,18);
		cout<<"1. Snacks\n\n\t\t\t\t2. Pizzas\n\n\t\t\t\t3. Beverages\n\n\t\t\t\t4. Ice Creams\n\n\t\t\t\t0. Exit";
		gotoxy(28,30);
		cout<<"\n  Enter your Choice: ";             //For Main Menu
		cin>>n;
	///////////////////////////////////////////////////////////////
	////////////////////////  Choices /////////////////////////////
	//////////////////////////////////////////////////////////////

		//////////////////// SNACKS ////////////////////////
		if(n==1)
		snacks();
		///////////////////// PIZZAS //////////////////////
		if(n==2)
		pizza();
		////////////////// BEVERAGES //////////////////
		if(n==3)
		beverages();
		////////////////// ICE CREAMS //////////////////
		if(n==4)
		icecream();
		////////////////////////  EXIT CASE  ///////////////////////////////////////
		else
		if(n==0)
		{
		}
		//////////////////////  WRONG ENTRY CASE  //////////////////////////////////
		else
		if(n>4)
		{
			cout<<" \n\n\n\n\nWRONG ENTRY !!!!";
			cout<<"\n\n\n\n\n DO U WANT ANYTHING ELSE FROM THIS MENU ??(y/n):  ";
			cin>>ch;
		}
	}while(tolower(ch)=='y'&&n!=0);
}
//////////////////////////////  REPLICA  //////////////////////////////////////
void mcds::replica()
{
		clrscr();

		cout<<"=============================================================================\n";
		cout<<"\t\t W E L C O M E  T O  M c D O N A N L Ds\n";
		cout<<"=============================================================================\n";
		gotoxy(5,10);
		date();
		gotoxy(70,10);
		time();
		gotoxy(30,14);
		cout<<"----------------------";
		gotoxy(30,15);
		cout<<" C H O I C E  M E N U ";
		gotoxy(30,16);
		cout<<"----------------------";
		gotoxy(33,18);
		cout<<"1. Snacks\n\n\t\t\t\t2. Pizzas\n\n\t\t\t\t3. Beverages\n\n\t\t\t\t4. Ice Creams\n\n\t\t\t\t0. Exit";
		gotoxy(28,30);
		cout<<"Enter your Choice: ";             //For Main Menu
		cin>>n;
		///////////////////////////////////////////////////////////////
		////////////////////////  Choices ////////////////////////////
		//////////////////////////////////////////////////////////////

		//////////////////// SNACKS ////////////////////////
		if(n==1)
		snacks();
		///////////////////// PIZZAS //////////////////////
		if(n==2)
		pizza();
		////////////////// BEVERAGES //////////////////
		if(n==3)
		beverages();
		////////////////// ICE CREAMS //////////////////
		if(n==4)
		icecream();
}
/////////////////////////////   FOR WRONG CHOICE  ////////////////////////////////////////////
void mcds::wrong()
{
	cout<<" \n\n\nWRONG ENTRY !!!!";
	cout<<"\n\n DO U WANT ANYTHING ELSE FROM THIS MENU ???? (y/n):  ";
	cin>>cha;
	if(tolower(cha)!='y')
	replica();
}
//////////////////////////  FOR BILL DISPLAY  ///////////////////////////////
void mcds::bill()
{
	clrscr();
	gotoxy(5,5);
	date();
	gotoxy(70,5);
	time();
	gotoxy(12,16);
	cout<<"~";
	gotoxy(12,17);
	cout<<"~";
	gotoxy(12,18);
	cout<<"~";
	gotoxy(12,19);
	cout<<"~";
	gotoxy(12,20);
	cout<<"~";
	gotoxy(12,21);
	cout<<"~";
	gotoxy(62,16);
	cout<<"~";
	gotoxy(62,17);
	cout<<"~";
	gotoxy(62,18);
	cout<<"~";
	gotoxy(62,19);
	cout<<"~";
	gotoxy(62,20);
	cout<<"~";
	gotoxy(62,21);
	cout<<"~";
	gotoxy(12,15);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	gotoxy(20,18);
	cout<<"Y O U R  T O T A L  B I L L = Rs. "<<s;
	gotoxy(12,21);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	getch();
	sum=sum+s;

	int p;
	ofstream k;
	k.open("bill.txt");
	k<<sum;
	k.close();
	ifstream l;
	l.open("bill.txt");
	l.seekg(0);
	while(!l.eof())
	{
	l>>p;
	//cout<<"\t"<<p;
	}
	neww= da;
	l.close();
	getch();
	if(s>0)
	mode();
	clrscr();
	gotoxy(12,16);
	cout<<"~";
	gotoxy(12,17);
	cout<<"~";
	gotoxy(12,18);
	cout<<"~";
	gotoxy(12,19);
	cout<<"~";
	gotoxy(12,20);
	cout<<"~";
	gotoxy(12,21);
	cout<<"~";
	gotoxy(12,22);
	cout<<"~";
	gotoxy(62,16);
	cout<<"~";
	gotoxy(62,17);
	cout<<"~";
	gotoxy(62,18);
	cout<<"~";
	gotoxy(62,19);
	cout<<"~";
	gotoxy(62,20);
	cout<<"~";
	gotoxy(62,21);
	cout<<"~";
	gotoxy(62,22);
	cout<<"~";
	gotoxy(12,15);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	gotoxy(18,17);
	cout<<"T H A N K S  F O R  V I S I T I N G";
	gotoxy(18,20);
	cout<<"P L E A S E  V I S I T  A G A I N !!!!";
	gotoxy(12,23);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	delay(1000);
}
////////////////////////////  LAST DISPLAY  /////////////////////////////////
void mcds::last()
{
	clrscr();
	gotoxy(12,16);
	cout<<"~";
	gotoxy(12,17);
	cout<<"~";
	gotoxy(12,18);
	cout<<"~";
	gotoxy(12,19);
	cout<<"~";
	gotoxy(12,20);
	cout<<"~";
	gotoxy(12,21);
	cout<<"~";
	gotoxy(12,22);
	cout<<"~";
	gotoxy(62,16);
	cout<<"~";
	gotoxy(62,17);
	cout<<"~";
	gotoxy(62,18);
	cout<<"~";
	gotoxy(62,19);
	cout<<"~";
	gotoxy(62,20);
	cout<<"~";
	gotoxy(62,21);
	cout<<"~";
	gotoxy(62,22);
	cout<<"~";
	gotoxy(12,15);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	gotoxy(27,17);
	cout<<"PREPARED & PRESENTED BY:";
	gotoxy(32,19);
	cout<<" CHINMAY JAIN \n\t\t\t\tDEVANSHU BISHERWAL \n\t\t\t\tGAURAV SHARMA";
	gotoxy(12,23);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{ int pee,pp,zz;
char z='y';
 while(z=='y'||z=='Y')
{
	s=0;
	p.display();
	p.maindisplay();
	p.bill();
	p.last();
	clrscr();
		cout<<"\nWANT TO RUN AGAIN y/n \n";
	cin>>z;
	delay(1500);
	clrscr();
	gotoxy(30,22);

	}
      if(z=='n')
      {   date();
	  cout<<"\t\t\t\t";
	  time();
	  cout<<"\n\n Total sale on above date \n = Rs "<<sum;
      }
       getch();




}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
