#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        
        int star = n-row+1;
        while (star)
        {
            cout<< "*" << " ";
            
            star-=1;
        }
        cout<< endl;
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
