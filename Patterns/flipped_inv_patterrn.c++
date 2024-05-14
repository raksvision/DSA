#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        int space = 0;
        while(space<row){
            cout << " "<<" ";
            space+=1;
        }
        
        int col = n-row+1;
        while(col){
            cout << "*" << " ";
            col-=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}


/*
5(n)
  * * * * *
    * * * *
      * * *
        * *
          *
*/