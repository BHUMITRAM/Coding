#include<bits/stdc++.h>
#define V 9
using namespace std;
void print(int distance[V],int source_node)
 {
  for(int i=0;i<V;i++)
   {
     cout<<"distance from source_node "<<source_node<<" to "<<"vertex "<<i<<" is "<<distance[i]<<endl;
   }
 }
int min_index(int distance[V],bool visited_node[V])
  {
    int min=INT_MAX,min_index;
    for(int i=0;i<V;i++)
      {
        if(visited_node[i]==false && distance[i]<=min)
          {
            min=distance[i];
            min_index=i;
          }
      }
    return min_index;
  }
void dijkastra(int Graph[V][V])
 {
  int distance[V],source_node;
  bool visited_node[V];
  for(int i=0;i<V;i++)
   {
     distance[i]=INT_MAX;
     visited_node[i]=false;
   }
  cout<<"enter source node"<<endl;
  cin>>source_node;
  distance[source_node]=0;
  for(int i=0;i<V;i++)
   {
     int min=min_index(distance,visited_node);
     visited_node[min]=true;
     for(int j=0;j<V;j++)
       {
         if(Graph[min][j] !=0 && visited_node[j]==false && distance[min]+Graph[min][j]<distance[j])
           distance[j]=distance[min]+Graph[min][j];
       }
   }
  print(distance,source_node);
 }

int main()
{
 int Graph[V][V]={{0,2,4,2,0,0,0,0,0},{2,0,1,0,0,0,0,4,0},{4,1,0,0,0,0,1,0,0},{2,0,0,0,4,0,0,0,0},{0,0,0,4,0,1,2,0,0},{0,0,0,0,1,0,0,1,0},{0,0,1,0,2,0,0,3,0},{0,4,0,0,0,1,3,0,2},{0,0,0,0,0,0,0,2,0}};
 dijkastra(Graph);
 return 0;
}
