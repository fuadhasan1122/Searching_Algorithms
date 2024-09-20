#include<bits/stdc++.h>
using namespace std;

    void Liner_Search(int arr[],int n,int key){
        int i,count = 0;
        for(i = 0;i < n; i++ ){
            if(arr[i]==key){
                cout <<"The key element is found at "<<i<<"th index"<<endl;
                count = count+1;
            }

        }
        if(count==0){
            cout <<"The element not found in this array"<<endl;
        }
    }
    int main(){
        int i,n,key;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cin >> key;
        Liner_Search(arr,n,key);
        return 0;
    }


