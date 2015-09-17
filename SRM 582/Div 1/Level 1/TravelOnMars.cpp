#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

class TravelOnMars2
{
public:
	struct mybfs
	{
		int cost;
		int node;
	};
    int minTimes(vector <int> range, int startCity, int endCity)
	{
		int rangelen=range.size();
		queue<struct mybfs> myQ;
		struct mybfs newnode;
		newnode.cost=0;
		newnode.node=startCity;
		myQ.push(newnode);
		cout<<"\nAddin:"<<newnode.node;
		while(1)
		{
			struct mybfs frontend=myQ.front();
			myQ.pop();
			//Add the neighbours
			for(int i=1;i<=range[frontend.node];i++)
			{
				//Pos side
				int posnode=((frontend.node)+i)%rangelen;
				struct mybfs posend;
				posend.node=posnode;
				posend.cost=frontend.cost+1;
				if(posnode==endCity)
				{
					return(posend.cost);
				}
				myQ.push(posend);
				cout<<"\nAddin:"<<posend.node;
				
				//Neg side
				int negnode=(frontend.node)-i;
				if(negnode<0){negnode+=rangelen;}
				struct mybfs negend;
				negend.node=negnode;
				negend.cost=frontend.cost+1;
				if(negnode==endCity)
				{
					return(negend.cost);
				}
				myQ.push(negend);
				cout<<"\nAddin:"<<negend.node;
			}

		}
	}
};