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

