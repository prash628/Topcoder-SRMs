#include <string>
#include <vector>
#include <iostream>
using namespace std;

class GameOfStones
{
public:
   int mysize;
   int total;
   int eq;
     int count(vector <int> stones)
   {
     mysize=stones.size();
     total=0;
     for(int i=0;i<mysize;i++)
     {
       total+=stones[i];
     }
     if(total%mysize!=0){return(-1);}
     eq=total/mysize;

     //fr equality
     int eqcount=0;
     int first=stones[0];
     for(int z=0;z<mysize;z++)
     {
       if(stones[z]!=first){eqcount++;}
     }

     if(eqcount==0){return(0);}

    int result=0;
    for(int z=0;z<mysize;z++)
    {
      int diff=(stones[z]-eq);
      if(diff%2!=0){return(-1);}
      if(diff>0)
      {
        if(stones[z]==2){return(-1);}
        result+=(diff/2);
      }
    }
    return(result);

   }
};


