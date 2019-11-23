#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<lli> multiPoly(const vector<lli> & a,const vector<lli> & b){
    vector<lli> c(a.size() + b.size() -1);
    for(int i = 0;i<a.size();i++){
        for(int j = 0;j<b.size();j++){
            c[i+j] += a[i] *b[j];
        }
    }
    return c;
}
int main(){
    string ciud;
    cin>>ciud;
    vector<lli> ans= {1};
    for(int i = 0;i<ciud.size()-1;i++){
        if(ciud[i] != ciud[i+1]){
            ans = multiPoly(ans,{1,-2*i-3});
        }
    }
    if((ciud[0] == 'H' && ans.back() < 0 )||(ciud[0] == 'A' && ans.back() > 0)){
        for(lli &xi:ans){
            xi = -xi;
        }
    }
    cout<<ans.size()-1<<endl;
    for(int i = 0;i<ans.size();i++){
        if(i)cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
