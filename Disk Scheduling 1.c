#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class sstf
{
int queue[10];
int current,size;
int nearest(int);
	public:
void getdata();
void move();
	};

void sstf::getdata()
{
	
cout<<"Enter the current position of head ";
    cin>>current;
    cout<<"Enter the size of queue : ";
    cin>>size;
    cout<<"Enter the elements of Queue : ";
    for(int i=0;i<size;i++)
        	cin>>queue[i];
    //86,1470,913,948,1774,1509,1022,1750,130
}

int sstf::nearest(int cur)
    {
    	int min = 99999,index,var;
    	for(int i=0;i<size;i++)
    	{
		if(queue[i]!=-1)
    	  {
    	  	var = abs(cur - queue[i]);
    		if(min>var)
    		{
    			min=var;
    			index=i;
			}
		  }
		}
		return index;
	}
	
	void sstf::move()
	{
		int cur = current;
		int total_dist=0;
		int index;
		for(int i =0;i<size;i++)
		{
			index=nearest(cur);
			total_dist += abs(cur - queue[index]);
			cur = queue[index];
			queue[index] = -1;
		}
		cout<<"Total Movement using SSTF -> "<<total_dist;
	}

int main(){
	    
	    sstf obj;
		obj.getdata();	
        obj.move();
		return 0;    
        }
