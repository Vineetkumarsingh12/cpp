#include <bits/stdc++.h>
using namespace std;
// class hea
// {
// public:
//     int size;
//     int arr[20];
//     hea()
//     {
//         size = 0;
//         arr[0] = -1;
//     }
//     void insert(int ele)
//     {
//         size += 1;
//         int index = size;
//         arr[index] = ele;
//         while (index > 1)
//         {
//             int parent = index / 2;
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index=parent;
//             }
//             else
//             return ;
//         }
//     }
//     void delet()
//     {
//         if(size==0){
//             cout<<"Nothing to delete";
//             return ;
//         }
//     arr[1]=arr[size];
//     size--;
//     int i=1;
//     while(i<size)
//     {
//         int leftindex=2*i;
//         int rightindex=2*i+1;
//         if(leftindex <= size && arr[leftindex]>arr[i] &&rightindex<=size &&arr[leftindex]>arr[rightindex])
//         {
//             swap(arr[i],arr[leftindex]);
//             i=leftindex;
//         }
//         else if(rightindex <= size && arr[rightindex]>arr[i])
//         {
//             swap(arr[i],arr[rightindex]);
//             i=rightindex;
//         }
//         else 
//         return ;
//     }

//     }
//     void print()
//     {
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << endl;
//         }
//     }
// };

// int main()
// {
//     hea h;
//     cout << "*";
//     h.insert(5);
//     h.insert(4);
//     h.insert(6);
//     h.insert(6);
//     h.insert(7);
//     h.insert(9);
//     h.print();
//     h.delet();
//     cout << "#";
//     h.print();


//     return 0;
// }
void heapify( int arr[],int size,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=size && arr[largest]<arr[left])
        largest=left;
      else  if(right<=size && arr[largest]<arr[right])
        largest=right;
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,size, largest);
    }
return ;

}
int main()
{
    int arr[]={-1,5,3,6,7,4,7,8},size=sizeof(arr)/sizeof(arr[0]);
    for(int i=(size-1);i>0;i--)
    heapify(arr,size,i);   // if n element is present then leaf element is n/2+1 to n.
    for(int i=1;i<size;i++)
    cout<<arr[i]<<endl;
    return 0;

}