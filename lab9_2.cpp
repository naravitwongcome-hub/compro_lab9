#include<iostream>
using namespace std;

//Write the function printO() here

void printO(int N , int M){
    if (N<=0 || M<=0){
        cout<<"Invalid input"<<endl;
        return;
    }
    for(int i = 0; i<N;i++){ 
        for(int j = 0;j<M;j++){
            cout << "O";
        }
        cout <<'\n';
    }
}
int main() {
    int n, m;
    cout << "Enter N and M: ";
    cin >> n >> m;
    printO(n, m);
    
    return 0;
}