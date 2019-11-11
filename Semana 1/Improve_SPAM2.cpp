#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli MAX = 1000000007;
lli V,m;
vector<lli> *lista;
unordered_set<lli> setT;
lli *DP;
int dfs(lli v){
    lli msj = 0;
    for(int i = 0;i<lista[v].size();i++){
        if(lista[v][i]<=m-1){
            if(DP[lista[v][i]] == 0){
                msj += dfs(lista[v][i]);
            }else msj += DP[lista[v][i]];
        }else{
            msj++;
            msj=msj%MAX;
            setT.insert(lista[v][i]);
        }
    }
    DP[v] += msj;
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
    cout<<DP[0]<<" "<<setT.size()<<endl;
    return 0;
}
