#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
          f*=i;
    }
    return f;
}

int main(){
    cout<<"Enter the rows of Pascal Triangle : ";
    int rows;
    cin>>rows;

    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            int nCr=fact(i)/(fact(i-j)*fact(j));
            cout<<nCr<<" ";
        }
        cout<<endl;
    }
}
