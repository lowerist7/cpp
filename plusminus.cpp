/*def plusMinus(arr):
    n = 0
    p = 0
    z = 0
    l = len(arr)
    for x in arr:
        if x == 0:
            z+=1
        elif x > 0:
            p+=1
        else:
            n+=1

    [print(round(x,6)) for x in [float(p/l),float(n/l),float(z/l)] */

#include <iostream>
#include <type_traits>
#include <vector>
#include <iomanip>
using namespace std;


void plusMinus(vector<int> arr){
    double n = 0;
    double p = 0;
    double z = 0;
    int l = arr.size();
    for(int i =0; i<l; i++){
        if (arr[i]>0) {
            p+=1;
        }
        else if (arr[i]<0) {
            n+=1;
        }
        else {
        z+=1;
        }
    }
    //cout<<n/l<<endl<<p/l<<endl<<z/l<<endl;
    cout<<fixed<<setprecision(6);
    cout<<n/l<<endl;
    cout<<p/l<<endl;
    cout<<z/l<<endl;
}

int main(){
    vector<int>arr = {1,1,0,-1,-1};
    plusMinus(arr);


}
