#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*int diagonalDifference(vector<vector<int>> arr){

}*/

/* int main(){
    std::vector<vector<int>> arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr<<endl;
} */

int diagonalDifference(vector<vector<int>>arr){
    int n=arr.size();
    int rtol = 0;
    int ltor = 0;
    for(int i=0; i<n; i++){
        rtol += arr[i][i];
        ltor += arr[i][n-1-i];//=>arr[1][9-1-1],
    }
    //cout<<rtol;
    return abs(ltor - rtol);

}

int main(){
    vector<vector<int>>arr = {
        {1,2,3,},
        {4,9,6},
        {9,8,9}
    };
    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size();j++){
        //cout<<arr[i][j]<<" ";
        }
        //cout<<endl;
    }
    int result = diagonalDifference(arr);
    cout<<result;
    //return diagonalDifference(vector<vector<int>> arr);

}
