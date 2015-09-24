#include <string>
#include <vector>
#include <iostream>
using namespace std;

class NamingConvention
{
public:

    string toCamelCase(string variableName)
  {
     string res="";
     int len=variableName.length();
     int firstund=-1;
     for(int i=0;i<len;i++)
     {
         if(variableName[i]=='_')
         {
           firstund=i;
           break;
         }
     }
     if(firstund==-1)
     {
         return(variableName);
     }
     else
     {
         for(int i=0;i<firstund;i++)
         {
           res=res+variableName[i];
         }
         int nxtOne;
         for(int i=firstund+1;i<len;)
         {
             nxtOne=-1;
           for(int j=i;j<len;j++)
           {
              if(variableName[j]=='_')
              {
                 nxtOne=j;break;
              }
           }
           if(nxtOne==-1)
           {
               int cap1=variableName[i];
                cap1-=32;

               char cap=(char)cap1;
               res=res+cap;
               for(int m=i+1;m<len;m++)
               {
                 res=res+variableName[m];
               }
               break;

           }
           else
           {
             if(nxtOne<=len)
             {
                int cap1=variableName[i];
                cap1-=32;

                   char cap=(char)cap1;
                   res=res+cap;
                 for(int m=i+1;m<nxtOne;m++)
                   {
                 res=res+variableName[m];
                   }
                 i=nxtOne+1;
             }
             else
             {
             i=nxtOne+1;
             break;
             }
             i=nxtOne+1;
           }

         }

           return(res);
     }


  }
};
