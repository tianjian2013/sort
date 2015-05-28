#include <vector> 
#include <iostream>
#include <algorithm>

using namespace std;
// max heap
template <class T>
class myStack{
std::vector <T> data;
public :
void push(T  t)
{
  data.push_back(t);
  int son=data.size()-1;
  //if(son<2) return ;
  int father=(son-1)>>1;
  while(son)
  {
     if(data[father]<data[son] ) 
     {
        swap(data[father],data[son]);
        son=father;
        father=(son-1)>>1;
     } 
     else break;
  }
}
T  top()
{
  return data.empty()?0:data[0];
}
int size()  
{
   return data.size();
}
void pop()
{
  if( data.empty() ) return ;
  swap(data[0],data[data.size()-1]);
  data.pop_back();
  
  int n=data.size();
  int p =0;
  int next=2*p+1;
  while(next<n)
  {
    if(next+1<n&&data[next+1]>data[next] ) next++;
    if(data[p]<data[next] ) 
    {
       swap(data[p],data[next] );
      p=next;
       next=2*p+1;
    } 
    else break;
  }
  
}
}; 

int main()
{
  int a[]={4,5,1,6,2,7,3,8};
int k=4;
  vector <int > input (a,a+8);
   vector <int > ret;
        if(input.empty()||k>input.size()||k<1 ) return 0;
        myStack <int > ss;
        for(int i=0;i<input.size();i++){
            if(ss.size()<k)
                ss.push(input[i]);
            else {
                int k=ss.top();
                if( input[i]<k)
                 {
                     ss.push(input[i]);
                     ss.pop();
                  }
           }
        }
       
        while(ss.size())
        {
            int k=ss.top();
            ret.push_back(k);
            ss.pop();
        }
        reverse(ret.begin(),ret.end());
        for(int i=0;i<ret.size();i++)
           cout<< ret[i]<<endl;
  
}

