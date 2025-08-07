//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;

int main() {
    int r1,c1,Dsum=0;
    int c =1;
    cout << "Enter No of Rows in Matrix 1: ";
    cin >> r1;
    cout << "Enter No of Columns in Matrix 1: ";
    cin >> c1;
    if(r1 != c1) {
        cout << "Matrix is not square. Diagonal sum not applicable." << endl;
        return 0;
    }
    int m1[r1][c1];
    cout << "\nMatrix 1:\n";
    for(int i = 0; i < r1;i++)
        for(int j = 0; j < c1;j++){
            cout << "Enter Element " << c <<": ";
            cin >> m1[i][j];
            c++;
        }
    for(int i = 0; i < r1;i++)
        for(int j = 0; j < c1;j++){
           if(i == j){
               Dsum += m1[i][j];
           }
        }
    cout << "\nDiagonal Sum: "<< Dsum;
   
    return 0;
    }
/*
Output:
case 1
Enter No of Rows in Matrix 1: 3
Enter No of Columns in Matrix 1: 3

Matrix 1:
Enter Element 1: 1
Enter Element 2: 2
Enter Element 3: 3
Enter Element 4: 4
Enter Element 5: 5
Enter Element 6: 6
Enter Element 7: 7
Enter Element 8: 8
Enter Element 9: 9

Diagonal Sum: 15

case 2
Enter No of Rows in Matrix 1: 1
Enter No of Columns in Matrix 1: 2
Matrix is not square. Diagonal sum not applicable.
*/