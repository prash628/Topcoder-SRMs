#include <string>
#include <vector>
#include <iostream>
using namespace std;

class ImageDithering
{
public:
	int count(string dithered, vector<string> screen)
	{
        int dithlen=dithered.length();
		int mycount=0;
		int screenlen=screen.size();
		for(int i=0;i<screenlen;i++)
		{
		  string x=screen[i];
		  int lenx=x.length();
		  for(int y=0;y<lenx;y++)
		  {
		    char chk=x[y];
		    for(int z=0;z<dithlen;z++)
		    {
		      if(dithered[z]==chk)
		      {
		        mycount++;
		        break;
		      }
		    }
		   }
		 } 
		 return(mycount); 
	}
};

