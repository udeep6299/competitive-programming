#include <bits/stdc++.h>
using namespace std;
// 1≤T≤100
// 2≤N≤100
// |S|=N
// S is a binary string

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count_0 = 0, count_1 = 0;
        for(int i =0; i<s.size(); ++i){
            if(s[i] == '0')
                count_0++;
            else
                count_1++;
        }
        // cout<<count_0<<" "<<count_1<<endl;
        if(count_1 == 0 || count_0 == 0)
            cout<<0<<endl;
        else{
            if(count_0<count_1){
                cout<<count_0-1<<endl;
            }else{
                cout<<count_1-1<<endl;
            }
        }
    }//t*n
}

