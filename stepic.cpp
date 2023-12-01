#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin>>a;
    int cnt=-1,ans=100000;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        if(ans>arr[i]){
            ans=arr[i];
        }
        if(cnt<arr[i]){
            cnt=arr[i];
        }
    }
    for(int i=0;i<a;i++){
        if(ans==arr[i]){
            arr[i]=cnt;
        }
        else if(cnt==arr[i]){
            arr[i]=ans;
        }
    }
    for(int i=0;i<a;i++){
        cout << arr[i] << " " ;
    }
}