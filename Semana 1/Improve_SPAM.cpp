#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli MAX = 1000000007;
lli V,m;
vector<lli> *lista;
lli msj = 0;
unordered_set<lli> setT;
void dfs(lli v){
    for(int i = 0;i<lista[v].size();i++){
        if(lista[v][i]<=m-1)dfs(lista[v][i]);
        else{msj++; msj=msj%MAX;setT.insert(lista[v][i]);};
    }
}
int main(){
    lli x,a;
    cin>>V>>m;
    lista = new vector<lli>[m];
    for(int i = 0;i<m;i++){
        cin>>x;
        while(x--){cin>>a;lista[i].push_back(a-1);}
    }
    dfs(0);
    cout<<msj%MAX<<" "<<setT.size()<<endl;
    return 0;
}
