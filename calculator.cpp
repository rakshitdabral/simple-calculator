#include <iostream>
using namespace std;
//function to design a hollow rectangle
void rectangle(int n, int m){
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n ||j == 1 || j == m)        
                cout << "*";            
            else
                cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int rows = 6, columns = 20;
    rectangle(rows, columns);
    cout << "1)Type 1 for addition";
    return 0;
}