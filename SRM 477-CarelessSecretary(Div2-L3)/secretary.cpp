#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secretary.in");
ofstream fout("secretary.out");

int N,K;

int func(int A[13],int letters[1000],int kthlevel,int letterssent);
int wrong(int A[13]);

int main()
{
	int letterssent;
    fin>>N;  //Ministers or letters
	fin>>K;  //No of delivered letters

	int A[13];
	int i;
	for(i=0;i<K;i++)
	{
		A[i]=-1;
	}

	int letters[1001];
	for(i=0;i<N;i++)
	{
		letters[i]=-1;
	}

	fout<<func(A,letters,0,0);

    return(0);
}

int func(int A[13],int letters[1000],int kthlevel,int letterssent)
{
	//Base
	if(kthlevel==K || letterssent==N)
	{
        fout<<"Booya"<<"\n";
		if(wrong(A)==1){return(1);}
		else{return(0);}
	}
	int total=0;
	int i;
	int j;
	for(i=0;i<N;i++)
	{
		if(letters[i]==-1)
		{
           for(j=0;j<K;j++)
           {
                if(A[j]==-1)
                {
				A[j]=i;
				letters[i]=1;
				total=total+func(A,letters,kthlevel+1,letterssent+1);
				A[j]=-1;
				letters[i]=-1;
                }
            }
		}
	}
	return(total);
}

int wrong(int A[13])
{
	int i=0;
	for(;i<K;i++)
	{
		if(A[i]==i){return(0);}
	}
	return(1);
}
