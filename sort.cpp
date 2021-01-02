#include <iostream>
using namespace std;

void swap(float &a, float &b){
    float temp;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
}
int main(){
    int n; cin >> n;
    if(n<=0) return 0;

    float arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(float i=0; i<n; i++){
        for(int k=0; k<n-1; k++){
            swap(arr[k], arr[k+1]);
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}