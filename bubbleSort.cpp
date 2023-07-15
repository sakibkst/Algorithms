#include<bits/stdc++.h>
using namespace std;

int Swap(int x,inty)
{
    int temp=*x;
    x=y;
    y=temp;
}

int bubbleSort(intA, int n)
{
    int i, j;
    for(i=0; i<n-1;i++)
    {
        for(j= 0; j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                Swap(&A[i],&A[j]);
            }
        }
    }
}
int printarray(int A, int n)
{
    for(int i = 0; i<n;i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;
}

int main()
{
   /*freopen("abir.txt","w",stdout);
    srand(time(0));
    for(int i=0; i<500; i++)
    {
        cout<<(rand()%100+1)<<endl;
    }*/



    freopen("srabone.txt","r",stdin);
    inta= new int [500];
    for(int i = 0; i<500;i++)
    {
        cin>>a[i];
    }
     for(int i = 0; i<500;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<bubbleSort(a,500)<<endl;
    cout<<printarray(a,500)<<endl;

    return 0;
}
