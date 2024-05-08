#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;

    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout<<row-col+1<< " ";
            col+=1;
        }
         row+=1;
         cout<<endl;
    }
    
}


/*
7(n)
1
2 1
3 2 1 
4 3 2 1 
5 4 3 2 1
6 5 4 3 2 1
7 6 5 4 3 2 1 
*/