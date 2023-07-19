#include<bits/stdc++.h>
using namespace std;

void setMatrixZeros(int arr[N][M], int n, int m){
    vector<int> markn(n, 0);
    vector<int> markm(m, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                markn[i] = 1;
                markm[j] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(markn[i] == 1){
            for(int j=0; j<m; j++){
                arr[i][j] = 0;
            }
        }
    }
    for(int j=0; j<m; j++){
        if(markm[j] == 1){
            for(int i=0; i<n; i++){
                arr[i][j] = 0;
            }
        }
    }
}

int main(){
    int arr[4][4] = {{1,1,1,1}, {1,0,0,1}, {1,1,0,1}, {1,1,1,1}};
    setMatrixZeros(arr, 4, 4);
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}