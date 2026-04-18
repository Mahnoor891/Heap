#include<iostream>
using namespace std;
int arr[7];
int n = 0 ;

void UpHeapify(int idx){
    int parent = (idx -1)/2;
    if(arr[idx]> arr[parent]){
        swap(arr[parent], arr[idx]);
        UpHeapify(parent);
    }
    else{
        return;
    }
}
void DownHeapify(int i,int size){ //i = current i
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if((left < size) && (arr[left]> arr[largest])){
        largest = left;
    }
     if((right < size) && arr[right]> arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[i], arr[largest]);
        DownHeapify(largest,size);
    }
}
void insert(int val){
    if(n >=7){
        return;
    }
    arr[n]= val;
    UpHeapify(n);
    n++;
}

void Delete(){
    swap(arr[0], arr[n-1]);
    n--;
    DownHeapify(0, n);
}
void Display(){
    cout<< "Max Heap: \n";
    for (int i =0; i < n; i++){
        cout<<arr[i] << " ";
    }
    cout<< endl;
}
void HeapSort(){
    int original = n;
    while(n >1){
        swap (arr[0] , arr[n-1]);
        n--;
        DownHeapify(0, n);
    }
    n = original;
    for(int i =0; i<original; i++){
        cout<< arr[i]<< " ";
    }
}
int main(){
    int value;
    int choice;
     while(true){
        cout<<"\n1.Insert";
        cout<<"\n2.Delete";
        cout<<"\n3.Display";
        cout<<"\n4.HeapSort";
        cout<<"\n Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"\nEnter the value to insert:  ";
            cin>> value;
            insert(value);
            break;
            case 2:
            Delete();
            cout<<"\n Value Removed.";
            break;
            case 3:
            cout<<"\n Displaying results:\n ";
            Display();
            break;
            case 4: 
            HeapSort();
            cout<<"\nSorted.";
            break;
            case 5:
            exit(0);
            break;

            default:
            cout<<" \nInvalid choice";

        }

    }
    return 0;
}