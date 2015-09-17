#include <string>
#include <vector>
#include <iostream>
using namespace std;

class FormatAmt
{
public:

    string amount(int dollars, int cents)
	{
	    string amount="$";
		char temp[200000];
		sprintf_s(temp,"%u",dollars);
		string dolla=temp;
		int startcomma=(dolla.length())%3;
		string newdolla="";
		for(int i=0;i<startcomma;i++)
		{
			
			newdolla=newdolla+dolla[i];
		}
		if(startcomma!=0 && startcomma<dolla.length()){newdolla=newdolla+",";}
		int count=0;
		for(int i=startcomma;i<dolla.length();i++)
		{
			if(count==3){count=0;newdolla=newdolla+",";}
			newdolla=newdolla+dolla[i];
		    count++;
		}
		amount=amount+newdolla;
		char centchar[100];
		sprintf_s(centchar,"%u",cents);
		string centchar2str=centchar;
		string centstr;
		if(cents==0){centstr=".00";}
		else if(cents<10){centstr=".0"+centchar2str;}
		else{centstr="."+centchar2str;}
		amount=amount+centstr;

		return(amount); 
	}
};

int main()
{
	FormatAmt x;
	cout<<x.amount(10000,13);
}