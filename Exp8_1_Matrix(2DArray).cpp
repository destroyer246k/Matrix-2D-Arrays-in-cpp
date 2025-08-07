//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;

int main() {
    int n,m,c=1;
    cout << "Enter No of Rows in Matrix:";
    cin >> n;
    cout << "Enter No of Columns in Matrix:";
    cin >> m;
    int m1[n][m];
    for(int i = 0; i < n;i++)
        for(int j = 0; j < m;j++){
            cout << "Enter Element " << c <<": ";
            cin >> m1[i][j];
            c++;
        }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout << m1[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}
/*
Output:
Enter No of Rows in Matrix:3
Enter No of Columns in Matrix:3
Enter Element 1: 1
Enter Element 2: 2
Enter Element 3: 3
Enter Element 4: 4
Enter Element 5: 5
Enter Element 6: 6
Enter Element 7: 7
Enter Element 8: 8
Enter Element 9: 9
1 2 3 
4 5 6
7 8 9
*/