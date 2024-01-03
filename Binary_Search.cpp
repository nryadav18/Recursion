#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int i,int j,int t){
    if (i>j) return false;
    int mid = (i+j)/2;
    if (arr[mid]==t) return true;
    else if (arr[mid]>t) return check(arr,i,mid-1,t);
    else return check(arr,mid+1,j,t);
}
int main(){
    //Binary_Search using Recursion
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    int t;
    cin>>t;
    if (check(arr,0,n-1,t)) cout << "True";
    else cout << "False";
    return 0;
}
