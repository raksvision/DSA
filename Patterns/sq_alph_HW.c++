#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;

int row = 1;

while(row<=n){
int col = 1;

    while (col <= n)
    {
        char ch = 'A'+row+col-2;
        cout<<ch<< " ";
        col+=1;
    }
cout<<endl;
row+=1;
}
return 0;
}

/*
5(n)
A B C D E
B C D E F
C D E F G
D E F G H 
E F G H I 
*/