#include "help.h"

int InvCnt=0;


void sortAndMerge(vector<int>& data,int start,int end,vector <int > & tmp)
{
if(start>=end) return ;
int mid =(start+end) >>1;
sortAndMerge(data,start,mid,tmp);
sortAndMerge(data,mid+1,end,tmp);

int p=start,q=mid+1;
int i=start;
while(p<=mid&&q<=end)
{
  if( data[p]<=data[q])
  {
     tmp[i++]=data[p++];
  }
  else 
  {
    tmp[i++]=data[q++];
    InvCnt+=(mid-p+1);
  }
}
while(p<=mid) tmp[i++]=data[p++];
while(q<=end)  tmp[i++]=data[q++];

  
for(int k=start;k<=end;k++)
{
  data[k]=tmp[k];
}
}
int mSort(vector<int>& data) {
    int n=data.size();
    if(n<2) return 0;
    vector <int >  tmp(n,0);
    sortAndMerge(data,0,n-1,tmp);
    return InvCnt;		
}


int main()
{
  int a[]={1,2,1,2,1};
  vector <int > input (a,a+5);
  cout << mSort(input);
}
