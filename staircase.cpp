#include<iostream>
using namespace std;

int main(){
    int n = 6;
    for(int i=0; i<=n; i++){
        //cout<<" "<<endl;
        for (int j = i; j<n; j++) {
            cout<<" ";
        }
        for(int k =i; k>=1; k--){
            cout<<"#";
        }
        cout<<endl;
        //cout<<"#"<<endl;
        /*for (int j=0; j<i; j++) {
            cout<<"#";
        }*/
    }
}
