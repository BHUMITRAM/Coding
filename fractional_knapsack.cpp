#include<bits/stdc++.h>
using namespace std;
 struct item 
  {
    double weight,value;
  };

bool comp(struct item item1,struct item item2)
  {
    int ratio1,ratio2;
    ratio1=item1.value/item1.weight;
    ratio2=item2.value/item2.weight;
    if (ratio1 >= ratio2)
       return true;
    else
       return false;
  }
int main()
{
 int n,knapsack_value=0;
 double capacity;
 cout <<"enter number of items"<<endl;
 cin >>n;
 cout <<"enter capacity of knapsack"<<endl;
 cin >>capacity;
 struct item arr[n];
 for(int i=0;i<n;i++)
  {
   cout<<"enter weight"<<endl;
   cin >>arr[i].weight;
   cout<<"enter value"<<endl;
   cin >>arr[i].value; 
  }
 sort(arr,arr+n,comp);
 for(int i=0;i<n;i++)
   {
     if (capacity!=0 && capacity>=arr[i].weight)
        {
          knapsack_value+=arr[i].value;
          capacity-=arr[i].weight;
        }
     else
        {
         knapsack_value+=capacity/arr[i].weight*arr[i].value;
        }
     if(capacity==0)
       break;
   }
 cout<<"knapsack value is "<<knapsack_value;
 return 0;
}
