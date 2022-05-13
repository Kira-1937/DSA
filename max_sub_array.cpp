#include<iostream>
#include <math.h>
using namespace std;
int sum(int s[],int q,int r,int t){
    int n=0;
    for(int i=r;i<=t;i++){
        n=n+s[i]; 
    }
    return n;
}
int main (){
    int n ;
    cin >>n;
    int array[n];
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
     
    int l=(n*(n+1))/2;
    int arr[l];
     int z=0;
    for (int i=1;i<=n;i++){
           int p=0;
        for (int j=i;j<=n;j++){
            arr[z]=sum( array,n,i,n-p);
            p++;
            z++;
        }
        
    }
   int sm=arr[0];
   for (int o=1;o<l;o++){
       sm=max(sm,arr[o]);
   }
   cout <<sm;
    
return 0;
}