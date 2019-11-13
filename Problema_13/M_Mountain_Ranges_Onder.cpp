#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n,m;
    cin>>n>>m;
    lli view[n];
    for(int i = 0;i<n;i++){
        cin>>view[i];
    }
    lli maxI = 1;
    for(int i = 0;i<n-1;i++){
        lli suma = 1;
        int x = i-1;
        for(int j = i+1;j<n;j++){
            x++;
            if((view[j] - view[x]) <= m)suma++;
            else break;
        }

        maxI = max(maxI,suma);
    }
    cout<<maxI<<endl;
    return 0;
}
