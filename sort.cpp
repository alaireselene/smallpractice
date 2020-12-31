#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp=a+b;
    if(a<b){
        a=temp-a;
        b=temp-a;
    }
}
int main(){
    int n; cin >> n;
    if(n<=0) return 0;

    float arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int i=0; i<n-1; i++){
            swap(arr[i], arr[i+1]);
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}