#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char val = 'A';
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col <=row)
        {
           cout<<val<<" ";
           val += 1;
           col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;


}

/*
8(n)
A
B C
D E F
G H I J
K L M N O
P Q R S T U
V W X Y Z [ \ 
] ^ _ ` a b c d
*/