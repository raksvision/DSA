#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            ch+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;

}

/*
5(n)
A
B B
C C C
D D D D
E E E E E
*/