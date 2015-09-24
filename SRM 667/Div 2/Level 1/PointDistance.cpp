#include <string>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class PointDistance
{
public:  int x3,y3;
      double ac,bc;
      int l1,l2; vector<int> res;

    vector <int> findPoint(int x1, int y1, int x2, int y2)
   {
  res.reserve(2);

      for(int x3=-100;x3<=100;x3++)
      {
        for(int y3=-100;y3<=100;y3++)
        {
            ac=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));

            bc=((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3));




              if(x3==x1 && y3==y1)
              {
              }
              else if( x3==x2 || y3==y2)
              {
              }
              else
              {
                 if(ac>bc)
                 {
                    res.push_back(x3);res.push_back(y3);

                 return(res);

                 }
              }


        }
      }
   return(res);


   }
};
