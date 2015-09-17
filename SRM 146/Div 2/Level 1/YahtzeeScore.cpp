#include <string>
#include <vector>
#include <iostream>
using namespace std;

class YahtzeeScore
{
public:
	int maxPoints(vector <int> toss)
	{
	   int maxscore=-1;
	   int idice=1;
	   for(;idice<=6;idice++)
	   {
	     int tempscore=0;
	     for(int x=0;x<5;x++)
	     {
	       if(toss[x]==idice){tempscore+=idice;}
	     }
	     if(tempscore>maxscore){maxscore=tempscore;}
	    }
		return(maxscore); 
	}
};