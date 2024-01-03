#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int j,int t,int i=0){
    if (i>j) return false;
    if (arr[i]==t) return true;
    else return check(arr,j,t,i+1);
}
int main (){
    //Linear Search using Recursion
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    int t;
    cin>>t;
    if (check(arr,n-1,t)) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}
