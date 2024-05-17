#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;

int row = 1;
while (row<=n)
{
    int space = n-row;
    while (space)
    {
        cout<<" ";
        space-=1;
    }
    int col =1;
    while (col<=row)
    {
        cout<<col;
        col+=1;
    }
    int tri = row - 1;
    while (tri)
    {
        cout<<tri;
        tri -= 1;
    }
    cout<<endl;
    row+=1;
    
}
    return 0;

}