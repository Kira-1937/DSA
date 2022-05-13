#include<iostream>
using namespace std;
void mergesort(int s[],int i,int f){
   if(i>=f){
     
   }
   for ( int z=i;z=f;z++){
       for (int k=i;k=f;k++){
           int r;
           if(s[z]>s[k]){
               r=s[k];
               s[k]=s[z];
               s[z]=r;

           }
       }
   }
}
int sorted( int a[],int n){
int mid=n/2;
mergesort(a,0,mid);
mergesort(a,mid,n-1);

}



int main(){
    int w;
    int arr[w];
    cout<<"length of array";
    cin>>w;
for (int i=0;i<w;i++){
    cin>>arr[i];
}


    cout<<sorted(arr,w);
    for (int i=0;i<w;i++){
    cout<<arr[i];
}
    return 0;
}