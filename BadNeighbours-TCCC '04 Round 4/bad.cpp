
#include<iostream>
#include<algorithm>
#include <vector>
#include <fstream> 
using namespace std;

int N;
int a[40];
ifstream fin("bad.in");
ofstream fout("bad.out");

void readem();
int func();
int find0();
int find1();

int main()
{
int i;  
fin>>N;
readem();
 fout<<func();  
    return(0);
}

void readem()
{
     int i;
     for(i=0;i<N;i++)
     {
         fin>>a[i];            
     }
}

                    
int func()
{
	if(N==1){return(a[0]);}
	if(N==2)
	{
		if(a[0]>a[1]){return(a[0]);}
		else{return(a[1]);}
	}
	int case1,case2;
	case1=find0();
    case2=find1();
	if(case1>case2){return(case1);}
	else{return(case2);}
}

int find0()
{
	int res[100],i;
	res[0]=0;
	res[1]=a[1];
	int temp;

	for(i=2;i<N;i++)
	{
		temp=a[i]+res[i-2];
		if(temp>res[i-1])
		{
			res[i]=temp;
		}
		else
		{
			res[i]=res[i-1];
		}
	}
	return(res[N-1]);
}

int find1()
{
	int res[100],i,temp;
	res[0]=a[0];
	if(a[1]>a[0]){res[1]=a[1];}
	else{res[1]=a[0];}
	for(i=2;i<(N-1);i++)
	{
		temp=a[i]+res[i-2];
		if(temp>res[i-1])
		{
			res[i]=temp;
		}
		else
		{
			res[i]=res[i-1];
		}
	}
	return(res[N-2]);
}
