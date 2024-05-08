#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int row =1;
    while(row<=n){
        int col = 1;
        while (col<= n)
        {
            int r = 'A'+row-1;
            cout<<r<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
        
    }
    return 0;
}


/*
5(n)
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/


//<---------------------------->


int main(){
    int num;
    cin>>num;
    int i=1;
    while(i<=num){
        int j = 1;
        while(j<=num){
            char ch = 'A'+j-1;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;

}


/*

6(n)
A B C D E F
A B C D E F
A B C D E F
A B C D E F
A B C D E F
A B C D E F*/