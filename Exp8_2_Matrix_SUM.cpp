//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;

int main() {
    int r1,r2,c1,c2;
    int c =1;
    cout << "Enter No of Rows in Matrix 1: ";
    cin >> r1;
    cout << "Enter No of Columns in Matrix 1: ";
    cin >> c1;
    cout << "Enter No of Rows in Matrix 2: ";
    cin >> r2;
    cout << "Enter No of Columns in Matrix 2: ";
    cin >> c2;
     if(r1==r2&&c1==c2){
    int m1[r1][c1];
    int m2[r2][c2];
    int sum[50][50];
    cout << "\nMatrix 1:\n";
    for(int i = 0; i < r1;i++)
        for(int j = 0; j < c1;j++){
            cout << "Enter Element " << c <<": ";
            cin >> m1[i][j];
            c++;
        }
    c =1;
    cout << "\nMatrix 2:\n";
    for(int i = 0; i < r2;i++)
        for(int j = 0; j < c2;j++){
            cout << "Enter for Matrix 2 Element " << c <<": ";
            cin >> m2[i][j];
            c++;
        }
    cout << "\nAddition:\n";
        for(int i = 0; i < r2;i++)
            for(int j = 0; j < c2;j++){
                sum[i][j] = m1[i][j] + m2[i][j];
            }
        for(int i =0;i<r2;i++){
            for(int j =0;j<c2;j++){
            cout << sum[i][j] <<" ";
        }
        cout << endl;
    }
    }
    else{
        cout << "Dimensions are not correct. Addition Not Possible"<<endl;
    }
    return 0;
}
/*
Output:
case 1
Enter No of Rows in Matrix 1: 3
Enter No of Columns in Matrix 1: 3
Enter No of Rows in Matrix 2: 3
Enter No of Columns in Matrix 2: 3

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

Matrix 2:
Enter for Matrix 2 Element 1: 9
Enter for Matrix 2 Element 2: 8
Enter for Matrix 2 Element 3: 7
Enter for Matrix 2 Element 4: 6
Enter for Matrix 2 Element 5: 5
Enter for Matrix 2 Element 6: 4
Enter for Matrix 2 Element 7: 3
Enter for Matrix 2 Element 8: 2
Enter for Matrix 2 Element 9: 1

Addition:
10 10 10
10 10 10
10 10 10

case 2
Enter No of Rows in Matrix 1: 1
Enter No of Columns in Matrix 1: 2
Enter No of Rows in Matrix 2: 3
Enter No of Columns in Matrix 2: 4
Dimensions are not correct. Addition Not Possible
*/