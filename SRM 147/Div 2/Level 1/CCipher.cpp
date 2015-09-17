#include <string>
#include <vector>
#include <iostream>
using namespace std;

class CCipher
{
public:
	char changeit(char x,int shift)
	{
		if(x-shift>=65){return(x-shift);}
		else{return(x-shift+26);}
	}
    string decode(string cipherText, int shift)
	{
	    string result="";
		int lenx=cipherText.length();
		for(int i=0;i<lenx;i++)
		{
			char x=cipherText[i];
			char y=changeit(x,shift);
			result=result+y;
		}
		return(result); 
	}
};