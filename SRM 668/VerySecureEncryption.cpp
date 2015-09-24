#include <string>
#include <vector>
#include <iostream>
using namespace std;

class VerySecureEncryption
{
char res[100];
char copy[100];
int N;
string op;
public:
  string encrypt(string message, vector <int> key, int K)
  {
  N=message.length();
  for(int j=0;j<N;j++)
  {
    res[j]=message[j];
  }
      for(int i=0;i<K;i++)
      {
        for(int j=0;j<N;j++)
        {
          copy[key[j]]=res[j];
        }
        for(int j=0;j<N;j++)
        {
          res[j]=copy[j];
        }
      }op="";
        for(int j=0;j<N;j++)
  {
    op+=res[j];
  }

     return(op);
  }
};
