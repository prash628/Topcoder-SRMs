
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include<cmath>

using namespace std;

class TrianglesContainOriginEasy
{
public:

  static float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

  static bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
   float A = area (x1, y1, x2, y2, x3, y3);
   float A1 = area (x, y, x2, y2, x3, y3);
   float A2 = area (x1, y1, x, y, x3, y3);

   float A3 = area (x1, y1, x2, y2, x, y);
   return (A == A1 + A2 + A3);
}


  int count(vector <int> x, vector <int> y)
  {
      int sz=x.size();
      int res=0;
      for(int i=0;i<sz;i++)
      {
      for(int j=0;j<sz;j++)
      {
        if(i!=j)
        {
      for(int k=0;k<sz;k++)
      {
        if(j!=k && i!=k)
        {
           if (isInside(x[i], y[i], x[j], y[j], x[k], y[k], 0, 0)){res++;}
        }
      }
      }
      }
      }
      res=res/6;
      return(res);

  }
};
