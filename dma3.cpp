//sum of elements of two different arrays using DMA within class 
#include<iostream> 
using namespace std; 
class Array 
{ 
    double *arr1,*arr2,*arr3; 
    int size; 
public: 
    void get_data(int n) 
    { 
        size=n; 
        arr1=new double[size]; 
        arr2=new double[size]; 
        arr3=new double[size]; 
        cout<<"Enter the elements for Array 1: "; 
        for(int i=0;i<size;i++) 
        { 
            cin>>arr1[i]; 
        } 
        cout<<"Enter the elements for Array 2: "; 
        for(int i=0;i<size;i++) 
        { 
            cin>>arr2[i]; 
        } 
    } 
    void sum() 
    { 
        for(int i=0;i<size;i++) 
        { 
            arr3[i]=arr1[i]+arr2[i]; 
        } 
        cout<<"\nThe updated array is: "; 
        for(int i=0;i<size;i++) 
        { 
            cout<<arr3[i]<<" "; 
        } 
    } 
    ~Array() 
    { 
        delete []arr1; 
        delete []arr2; 
        delete []arr3; 
        cout<<"\nMemory deallocated"; 
    } 
}; 
int main() 
{ 
    Array a; 
    int n; 
    cout<<"Enter the no. of elements: "; 
    cin>>n; 
    a.get_data(n); 
    a.sum(); 
    return 0; 
}
