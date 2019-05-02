// finding gcd & lcm
#include<iostream.h>
#include<conio.h>
class proj
{
 private:
	 int a,c,x,y,b,gcd,lcm;
 public:
	void ip();
	void op();
	void GCD();
	void LCM();
};

void proj::ip()
{
 cout<<"To find GCD & LCM ";
 cout<<"enter two numbers \n";
 cin>>x>>y;
 a=x;
 b=y;
}

void proj::GCD()
{
 for(c=a%b;c!=0;c=a%b)
  {
   a=b;
   b=c;
  }
 gcd=b;
}

void proj::LCM()
{
 lcm=(x*y)/gcd;
}

void proj::op()
{
 cout<<"GCD="<<gcd<<endl;
 cout<<"LCM="<<lcm<<endl;
}

void main()
{
 clrscr();
 proj A;
 A.ip();
 A.GCD();
 A.LCM();
 A.op();
 getch();
}
/* output:
To find GCD & LCM enter two numbers
  23
  45
  GCD=1
  LCM=1035 */
