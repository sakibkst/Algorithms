#include<iostream>
using namespace std;
int position=-1;

int binarySearch(int *arr, int num, int data)
{
    int left=0, right=num-1;
    int mid;
    while(left < right)
    {
        mid = ((left + right)/2);
        if(data == arr[mid])
        {
            position=mid;
            return position;
        }

        else if (data < arr[mid])
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }

    }
    return position;
}
 int main(){
     int *Array=new int[5];
     int numS;
     cin>> numS;
      cout<<binarySearch(Array, 7, numS);
     if(position == -1){
        cout<<"Data not Found"<<endl;
    }
    else{
        cout<<"Binary search : Data found "<<position<<" at index"<<endl;

    }


   return 0;
 }
