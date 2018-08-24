#include<bits/stdc++.h>
using namespace std;

int refernce_id ;
static int  node_number ;
char* timestamp()             //function returning the time_stamp value at the creation of node
{
 		 time_t now = time(0);
     char* dt = ctime(&now);
     return dt;
}

tuple data(int id ,int value ,string ownername)     //  function to create the hash of the set (id, value, name)
{
	unoredered_map<tuple<int,int,string>>m,k;
	k=m[make_tuple(id,value,ownername)]
	return k;
}

struct node              //structure of the node
{ 
  int node_id;
  int time=timestamp();
  bitset<32> node_id;
  node_number++;
  int id;
  cin>>id;
  float value ;
  string owner_name ;
  cin>>value>>owner_name; 
  tuple t=data(id,value,owner_name);
  unordered_map<int ,list<int>,list<string>>m;
  int key;
  cin>>key;
  
  m[key].push_back(time);
  m[key].push_back(t);
  m[key].push_back(node_number);
  m[key].push_back(node_id);
  m[key].push_back(reference_id);
  m[key].push_back(genesis_reference);
}*p;

node newnode()   // for the dynamically creation of the node
{
	node *p;
	p=new node();
	return node;
}

int main()
{
 	int ref=-1;
 	int count;
 	int num;
 	cin>>num;
 	for(int i=0;i<num;i++)
 	{
    node *t;
 	 	t=newnode();
  }
 	if(referenceid==nodenumber)
 	{
 	  	return ref;
	} 	
}
