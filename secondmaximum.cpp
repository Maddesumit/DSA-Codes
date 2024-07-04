#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int arr[]={10,20,30,40,50};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int ans=-1;
    for(int i=0;i<n;i++){
    if(arr[i]>ans)
        ans=arr[i];
    }
    
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=ans)
            second=max(second,arr[i]);
    };
    
    cout<<second;
}
