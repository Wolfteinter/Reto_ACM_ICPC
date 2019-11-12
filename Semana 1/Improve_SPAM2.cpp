#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli MAX = 10000000007;
lli V,m;
vector<lli> *lista;
unordered_set<lli> setT;
lli *DP;
lli dfs(lli v){
    lli msj = 0;
    for(int i = 0;i<lista[v].size();i++){
        if(lista[v][i]<=m-1){
            if(DP[lista[v][i]] == 0){
                msj = (msj + dfs(lista[v][i]))%MAX;
            }else msj = (msj + DP[lista[v][i]])%MAX;
        }else{
            msj = (msj + 1)%MAX;
            setT.insert(lista[v][i]);
        }
    }
    DP[v] = (DP[v] + msj)%MAX;
    return msj;
}
int main(){
    lli x,a;
    cin>>V>>m;
    lista = new vector<lli>[m];
    DP = new lli[V];
    memset(DP,0,sizeof(DP));
    for(int i = 0;i<m;i++){
        cin>>x;
        while(x--){cin>>a;lista[i].push_back(a-1);}
    }
    dfs(0);
    cout<<DP[0]%MAX<<" "<<setT.size()<<endl;
    return 0;
}
