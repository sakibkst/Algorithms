#include<bits/stdc++.h>
using namespace std;



int main(){

    freopen("search_dna.txt","w",stdout);

char c[4]={'A','T','C','G'};
srand(time(0));
for(int i=0;i<100;i++){

            cout<<c[rand()%4];
}

return 0;
}
