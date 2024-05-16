#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int space = 1;
        while(space<row){
            cout<<" ";
            space+=1;
        }
        int col = n-row+1;
        while(col){
            int val = n-col+1;
            cout<< val ;
            val+=1;
            col-=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

/*
5(n)
12345
 2345
  345
   45
    5
*/