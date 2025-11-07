#include <iostream>
#include <string>
#include <vector>
using namespace std;




long aVeryBigSum(vector<int>ar){
    long sum=0 ;
    //long n = sizeof(ar)/sizeof(ar[0]);
    //long n = ar.size();
    for(int i=0;i<ar.size();i++){
        sum +=ar[i];
    }
    //cout<<n<<endl;
    return sum;

}

int main(){

    vector<int>ar = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    long result = aVeryBigSum(ar);

    //cout<<result<<endl;
    return 0;
}
