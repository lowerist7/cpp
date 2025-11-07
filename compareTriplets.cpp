
/*def compareTriplets(a, b):
    alice = bob = 0

    for i in range(3):
        if(a[i] > b[i]):
            alice += 1
        elif(a[i] < b[i]):
            bob += 1

    return [alice, bob]

a = list(map(int, input().split()))
b = list(map(int, input().split()))

result = compareTriplets(a, b)

print(*result) */

#include<iostream>
#include <type_traits>
#include<vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int result_a=0;
    int result_b=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            result_a+=1;
        }
        else if (b[i]>a[i]) {
            result_b+=1;

        }
    }
    return {result_a,result_b};
}

int main(){
    std::vector<int> a = {5,6,7};
    std::vector<int> b = {3,6,10};
    vector<int>result = compareTriplets(a,b);
    cout<<result[0]<<":"<<result[1]<<endl;
    return 0;
}
