#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    string cake;
    lli n;
    cin>>cake;
    cin>>n;
    lli tam = cake.size();
    lli total = tam*n;
    lli contador = 0;
    lli ans = 0;
    lli first = cake.find('E');
    if(first == -1){cout<<"0"<<endl;return 0;}
    lli i = first;
    do{
        if(cake[i%tam] == 'P')contador = (contador < n) ? contador + 1 : contador;
        else contador = 0;
        ans += contador;
        i++;
    }while(i%tam != first);
    cout<<total-ans<<endl;
    return 0;
}
