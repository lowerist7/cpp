
#include<iostream>
using namespace std;

int simpleArraySum(int arr[],int n) {

    // Initialize sum to 0
    int sum = 0;
     for(int i = 0; i < n;i++){
        // Add each element to sum
        sum += arr[i];

     }
        return sum;
    }
int main(){
    int arr[] = {1, 2, 3, 4, 10, 11};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << "the sum of elements of arr is:" << simpleArraySum(arr,n) <<endl;
    cout<< "number of elements in arr is  : "<< n<< endl;
    return 0;

}
