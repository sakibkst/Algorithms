//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MiddleNumber(int a){
    int x;

    x=(a%4)+1;
    cout<<"Your number is : "<<x<<endl;

    return x;
}

void swap(int Array[],int i,int j){
    int temp=Array[i];
    Array[i]=Array[j];
    Array[j]=temp;
}

void PrintArray(int *Array,int Size){
    int Count=0;
    cout<<"Array is : ";
    for(int i=0;i<Size;i++){
        cout<<Array[i]<<" ";
        Count++;
    }
    cout<<endl;
    cout<<"Total number is : "<<Count<<endl;
}

void LinearSearch(int *Array, int Size,int SearchNumber){
    int flag=0;
    for(int i=0;i<Size;i++){
        if(Array[i]==SearchNumber){
            cout<<"Linear Search : "<<"You find the number at index : "<<i<<" and the number is : "<<Array[i]<<endl;
            flag++;
        }
    }
    if(flag==0){
        cout<<"Linear Search : "<<"Number does't found"<<endl;

    }
}

//int BinarySearch(int *Array,int Size,int SearchNumber){
int binarySearch(int arr[], int p, int r, int num) {

    /*int Min,Max,MiddleNumber,HalfNumber;
    Min=Array[0];
    for(int i=0;i<Size;i++){
        if(Array[i]<Min){
            Min=Array[i];
        }
    }
    //cout<<"Smallest number is : "<<Min<<endl;
    Max=Array[0];
    for(int i=0;i<Size;i++){
        if(Array[i]>Max){
            Max=Array[i];
        }
    }
    //cout<<"Biggest number is : "<<Max<<endl;*/

    if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}


void BubbleSort(int *Array, int Size){
    int Count;
    for(int i=0;i<Size-1;i++){
        for(int j=0;j<Size-i-1;j++){
            if(Array[j]>Array[j+1]){
                swap(Array[j],Array[j+1]);
            }
        }
    }
    cout<<"Bubble sort array is : ";
    for(int i=0;i<Size;i++){
        cout<<Array[i]<<" ";
        Count++;
    }
    cout<<endl;
    //cout<<"Total number is : "<<Count<<endl;
}

int Position(int Array[],int first,int last){

    int Pivot=Array[last];
    int i=first-1;

    for(int j=first;j<last;j++){
        if(Array[j]<Pivot){
            i++;
            swap(Array,i,j);
        }
    }
    swap(Array,i+1,last);

    return i+1;
}

void QuickSort(int Array[],int first,int last){
    int Loc;

    if(first<last){
        Loc=Position(Array,first,last);
        QuickSort(Array,first,Loc-1);
        QuickSort(Array,Loc+1,last);
    }
}

int main(){
    int a,Number,result;
    int Size=5;
    int *Array=new int[Size];

    cout<<"Enter your middle number : ";
    cin>>a;
    MiddleNumber(a);

    cout<<"Enter the number you want to search : ";
    cin>>Number;
    freopen("NumberGenetateForMid.txt", "r", stdin);
    for(int i=0;i<Size;i++){
        cin>>Array[i];
    }

    LinearSearch(Array,Size,Number);
    cout<<endl;

    int index = binarySearch (Array, 0, Size-1, Number);
    if(index == -1){
        cout<<"Binary search : "<< Number <<" is not present in the array";
        cout<<endl;
    }
    else{
        cout<<"Binary search : "<< Number <<" is present at index "<< index <<" in the array";
        cout<<endl;
    }
    cout<<endl;
    BubbleSort(Array,Size);
    cout<<endl;
    //PrintArray(Array,Size);
    cout<<endl;
    QuickSort(Array,0,Size-1);
    cout<<"Quick Sort is : ";
    for(int i=0;i<Size;i++){
        cout<<Array[i]<<" ";
    }
    cout<<endl;



return 0;
}
