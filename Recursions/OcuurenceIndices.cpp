#include <iostream>

using namespace std;
void search(int arr[],int size,int key,int i){
    if (i==size) return ;
    if (key==arr[i])
    {
        cout<<i<<endl;
    }
     search( arr,size,key,i+1);
    
    
}
int main(){
    int arr[ ] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    int i=0;
    search(arr,size,key,i);
    
    

}