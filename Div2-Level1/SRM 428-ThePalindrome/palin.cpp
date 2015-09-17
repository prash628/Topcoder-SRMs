#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;
ifstream fin("palin.in");
ofstream fout("palin.out");

int oo;
int mainlen;
int func(string x);
int chkpalin(string x);

int main()
{
    string x;
    fin>>x;
    oo=((x.length())*2)-1;
    mainlen=oo;
	
	fout<<func(x);
    return(0);
}


int func(string x)
{
    fout<<x<<"\n";
	int temp;
	if(chkpalin(x)==1)
	{
                      fout<<"\nGotcha punk"<<x<<"Ciao";
		temp=x.length();
		//fout<<"  Mainlen:"<<mainlen<<"  temp:"<<temp<<"\n";
		if(temp<=mainlen){mainlen=temp-1;//fout<<"\nMainlen Naw:"<<mainlen<<"\n";
        }
		return(temp);
	}

	if((x.length())>=mainlen)
	{
          //fout<<x.length()<<" "<<mainlen<<"\n";
		return(oo);
	}

	int i;
	char add;
	int mintemp;
	int min=oo;
	for(i=97;i<=122;i++)
	{
		add=(char)i;
		//fout<<"add:"<<add<<"\n";
		if(x.length()<=mainlen)
		{
		mintemp=func((x+add));
        }
		if(mintemp<min){min=mintemp;}
	}
	return(min);
}
int chkpalin(string x)
{
	int i;
	int len=x.length();
	for(i=0;i<len;i++)
	{
		if(x[i]!=x[len-1-i]){return(0);}
	}
	return(1);
}
