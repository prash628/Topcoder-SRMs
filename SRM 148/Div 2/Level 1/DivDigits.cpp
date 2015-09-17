#include <string>
#include <vector>
#include <iostream>
using namespace std;

class DivisorDigits
{
public:

    int howMany(int number)
	{
	    int x=number;
		int count=0;
		int y;
		while(x>0)
		{
			y=x%10;
			if(y==0){}
			else{if(number%y==0){count++;}}
			x=x/10;
		}
		return(count); 
	}
};