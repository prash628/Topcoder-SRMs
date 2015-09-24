#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

class ChristmasTreeDecorationDiv2
{
public:
     int solve(vector <int> col, vector <int> x, vector <int> y)
  {
  int res=0;
     for(int i=0;i<y.size();i++)
     {
        if(col[x[i]-1]!=col[y[i]-1]){res++;}

     }
     return(res);

  }
};
