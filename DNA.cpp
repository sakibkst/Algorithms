#include<bits/stdc++.h>
using namespace std;



int main(){

    freopen("dna.txt","w",stdout);

char c[4]={'A','T','C','G'};
srand(time(0));
for(int i=0;i<50;i++){
    for(int j=0;j<100;j++){
            cout<<c[rand()%4];
    }
    cout<<endl;
}

return 0;
}
