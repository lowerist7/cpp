#include<iostream>
#include <vector>
using namespace std;

void miniMaxSum(vector<int>n){
    int sum = 0;
    int large_num=n[0];
    int min_sum=0;
    int max_sum=0;
    int small_num=n[0];
    for(int i=0;i<n.size();i++){
        sum+=n[i];
        if (n[i]>large_num) {
            large_num=n[i];
            //large_ind=i;
           // min_sum=sum-large_num;
            //n.push_back(large_num);
            //cout<<n[i]<<endl;
        }
        if (n[i]<small_num) {
            small_num=n[i];
           // max_sum=sum-small_num;
        }


        /*for (int j=0; j<large_num; j++) {
            //min_sum+=n[j];
            min_sum=n[j];
        } */

    }
    max_sum=sum-small_num;
    min_sum=sum-large_num;
    cout<<min_sum<<" "<<max_sum;
    //return (min_sum,max_sum);

}
int main(){
    vector<int> n={1,3,5,7,9};
    miniMaxSum(n);
    //cout<<n.size()<<endl;
    //cout<<t_sum<<endl;
    return 0;
}
