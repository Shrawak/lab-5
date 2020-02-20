#include <iostream>
using namespace std;

bool binarySearch(int list[],int size, int x) 
{ 
    int l=0;
    int r=size-1;
    while (r >= l) { 
        int mid = (l+r)/2; 
        
        if (list[mid] == x) {
            return mid; 
        }
        else if (list[mid] > x) {
           r=mid-1;
          
        }
        else{
            l=mid+1;
        } 
    }
    if(r<l){
        return false; 
        
    }
}    

int main() 
{ 
    int arr[] = { 2, 3, 4, 10, 40,66,72,77,80 }; 
    int x = 660; 
    int n = sizeof(arr) / sizeof(int); 
    int result = binarySearch(arr,n, x); 
    if(!result) {
        cout <<x<< " is not present in array";
        }
    else{    
        cout <<x<< " is present" ; 
    }
    return 0; 
} 


