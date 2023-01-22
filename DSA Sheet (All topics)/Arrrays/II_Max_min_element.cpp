//? *** This algorithm works with a comlexity of * O n(log n ) * 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
     
    int arr[n];
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }

    sort( arr , arr +n);

    cout<<"Max element is : "<<arr[n-1]<<endl;
    cout<<"Min element is : "<<arr[0];

return 0;
}