#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void BubbleSort(int *A, int n){
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n-k-1;i++){
            if(A[i]>A[i+1]){
                swap(A[i],A[i+1]);
            }
        }
    }
    /*cout<<"Bubble sort array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }*/
    cout<<endl;
}

int Partition(int *A,int Start,int End){
    int pivot = A[End];
    int pIndex = Start;

    for(int i=Start;i<End-1;i++){
        if(A[i]<pivot){
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[End]);
    return pIndex;
}

void QuickSort(int *A,int Start,int End){
    int pIndex;
    if(Start>=End){
        pIndex=Partition(A,Start,End);
        QuickSort(A,Start,pIndex-1);
        QuickSort(A,pIndex+1,End);
    }
}

int main()
{
    int middleId = 45038;
    cout<<(middleId%3+1)<<endl;

    int k=100000;

    int *a = new int[k];

    freopen("in.txt","r",stdin);
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
    }


    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<< "For Bubble Sort: "<<endl;
    BubbleSort(a,k);
    cout<<endl<<endl;
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 1st Algorithm........................*/

    auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    //cout<<PairwaseProductFast(a,k)<<endl;
    QuickSort(a,0,k-1);
    cout<<endl;
    cout<<"For Quick Sort : "<<endl;
    /*for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }*/
    cout<<endl;
    /* .......................................  */


    /*.....................Time taken by 2nd Algorithm........................*/
    auto end2 = chrono::high_resolution_clock::now();
    double time_taken2 =chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();
        time_taken2 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken2 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 2nd Algorithm........................*/


    return 0;
}
