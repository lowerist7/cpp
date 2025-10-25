#include<iostream>
using namespace std;

int solvemefirst(int a, int b){
    return a + b;
}

int main(){
    int num1, num2;
    //cin >> num1 >> num2;
    cout << " enter num1:";
    cin >> num1;
    cout << " enter num2:";
    cin >> num2;
    int sum = solvemefirst(num1,num2);
    cout << sum<< endl;
    return 0; 
}