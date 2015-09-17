#include <string>
#include <iostream>
using namespace std;

class Time
{
public:
	string whatTime(int seconds)
	{
		int hours=(seconds/(60*60));
		int minutes=(seconds-(hours*(60*60)))/60;
		int secs=(seconds-(hours*(60*60))-(minutes*60));
		char x[20];
		sprintf_s(x,"%u:%u:%u",hours,minutes,secs);
		return(x);
	}
};
/*
int main()
{
	Time x;
	cout<<x.whatTime(86398);
}*/
