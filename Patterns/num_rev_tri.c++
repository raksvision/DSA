#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    int val = 1;
    while(row<=n){
        int space = n-row;
        while (space)
        {
            cout<<" ";
            space-=1;
        }
        int col =1;
        
        while(col<=row){
            cout<< val;
            val+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

/*
4(n)
   1
  23
 456
78910
*/