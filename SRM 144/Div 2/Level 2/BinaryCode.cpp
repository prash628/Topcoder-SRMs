#include <string>
#include <vector>
#include <iostream>
using namespace std;

class BinaryCode
{
public:
    vector <string> decode(string message)
	{
		string Q1="0";
		string Q2="1";
		int msglen=message.length();

		int sum,left,right,mid;
		char rt;
		//For q1
		for(int i=0;i<msglen;i++)
		{
			sum=((int)message[i])-48;
			if(i==0){left=0;}
			else
			{
				left=((int)Q1[i-1])-48;
			}
			mid=((int)Q1[i])-48;
			if(i==(msglen-1)){right=0;}
			else
			{
				right=sum-left-mid;
			}
			rt=(char)(right+48);
			if(i<(msglen-1))
			{
				Q1=Q1+rt;
			}
			
		}


		//For q2
		for(int i=0;i<msglen;i++)
		{
			sum=((int)message[i])-48;
			if(i==0){left=0;}
			else
			{
				left=((int)Q2[i-1])-48;
			}
			mid=((int)Q2[i])-48;
			if(i==(msglen-1)){right=0;}
			else
			{
				right=sum-left-mid;
			}
			rt=(char)(right+48);
			if(i<(msglen-1))
			{
				Q2=Q2+rt;
			}
		}

		//For q1-verification
		for(int i=0;i<msglen;i++)
		{
			if(i==0){left=0;}
			else{left=((int)Q1[i-1])-48;}

			if(i==(msglen-1)){right=0;}
			else{right=((int)Q1[i+1])-48;}

			mid=((int)Q1[i])-48;
			if((left+right+mid)==((int)message[i])-48){}
			else{Q1="NONE";break;}

			if(mid<0 || mid>1){Q1="NONE";break;}
		}


		//For q1-verification
		for(int i=0;i<msglen;i++)
		{
			if(i==0){left=0;}
			else{left=((int)Q2[i-1])-48;}

			if(i==(msglen-1)){right=0;}
			else{right=((int)Q2[i+1])-48;}

			mid=((int)Q2[i])-48;
			if((left+right+mid)==((int)message[i])-48){}
			else{Q2="NONE";break;}

			if(mid<0 || mid>1){Q2="NONE";break;}
		}

		vector<string> op;
		op.push_back(Q1);
		op.push_back(Q2);
		return(op);
	}
};