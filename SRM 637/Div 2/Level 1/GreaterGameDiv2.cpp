#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

class GreaterGameDiv2
{
public:

    int calc(vector <int> snuke, vector <int> sothe)
  {
     int total=0;
    for(int i=0;i<snuke.size();i++)
    {
      if(snuke[i]>sothe[i]){total++;}
    }
    return(total);
  }
};
