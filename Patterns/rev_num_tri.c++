#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space-=1;
        }
        int col = 1;
        while(col<=row){
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

/*
6(n)
     1
    22
   333
  4444
 55555
666666
*/