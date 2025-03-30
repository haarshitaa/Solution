#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int i=0;
    char c = s[i];
    int maxi = 0;
    int cnt = 0;
    while(i<n){
        if(s[i]==c){
            cnt++;
            maxi = max(maxi,cnt);

        }else{
            c=s[i];
            cnt = 1;
        }
        i++;
    }
    cout<<maxi<<endl;
    return 0;
}