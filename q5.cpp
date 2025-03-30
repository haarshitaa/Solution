#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n==1) cout<<1<<endl;
   else if(n<=3){
    cout<<"NO SOLUTION"<<endl;
   }
   else{
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i] = i+1;
    }
        for(int i=1;i<n;i+=2){
            cout<<v[i]<<" ";
        }
        for(int i=0;i<n;i+=2){
            cout<<v[i]<<" ";
        }
    
   }
    return 0;
}
