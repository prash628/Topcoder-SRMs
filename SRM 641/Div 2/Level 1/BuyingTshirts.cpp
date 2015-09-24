#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

class BuyingTshirts
{
public:

   int meet(int T, vector <int> Q, vector <int> P)
  {
  int num=0;

  int sz=Q.size();
  int Qamt=0;
  int Pamt=0;
  for(int i=0;i<sz;i++)
  {
    Qamt+=Q[i];Pamt+=P[i];
    if(Qamt>=T && Pamt>=T){num++;}
    if(Qamt>=T){Qamt-=T;}
    if(Pamt>=T){Pamt-=T;}

  }
  return(num);

  }
};
