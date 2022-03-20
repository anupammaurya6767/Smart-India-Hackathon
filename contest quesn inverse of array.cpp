#include <iostream>
using namespace std;
void printarr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
    }
void inverse(int a[],int n){
    int i=1;
    int j=n-1;
    for(i=1;i<j;i++)
        {
            swap(a[i],a[j]);
            j--;
        }}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    inverse(a,n);
    printarr(a,n);
return 0;}
