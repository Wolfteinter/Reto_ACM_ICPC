#include <bits/stdc++.h>
using namespace std;
int main(){
    string patron;
    cin>>patron;
    int tam = patron.size();
    unordered_set<string> subS;
    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam - i;j++){
            subS.insert(patron.substr(i,i+j));
        }
    }
    unordered_set<string>::iterator i;
    for(i=subS.begin();i!=subS.end();++i){
        cout<<*i<<endl;
    }
    return 0;
}
