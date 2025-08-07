//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int c = 1;
    cout << "Enter No of Rows in Matrix 1: ";
    cin >> r1;
    cout << "Enter No of Columns in Matrix 1: ";
    cin >> c1;
    cout << "Enter No of Rows in Matrix 2: ";
    cin >> r2;
    cout << "Enter No of Columns in Matrix 2: ";
    cin >> c2;

    int m1[r1][c1];
    int m2[r2][c2];

    if (r1 == r2 && c1 == c2) {
        cout << "\nMatrix 1:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << "Enter Element " << c << ": ";
                cin >> m1[i][j];
                c++;
            }
        }

        c = 1;
        cout << "\nMatrix 2:\n";
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << "Enter Element " << c << ": ";
                cin >> m2[i][j];
                c++;
            }
        }

        bool equal = true;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                if (m1[i][j] != m2[i][j]) {
                    equal = false;
                    break;
                }
            }
            if (!equal) 
                break;
        }

        if (equal) {
            cout << "Matrices are Equal";
        } 
        else {
            cout << "Matrices are Not Equal";
        }
    } 
    else {
        cout << "Matrices are Not Equal (Different Dimensions)";
    }
    return 0;
}
/*
Output: 
case 1
Enter No of Rows in Matrix 1: 1
Enter No of Columns in Matrix 1: 2
Enter No of Rows in Matrix 2: 3
Enter No of Columns in Matrix 2: 4
Matrices are Not Equal (Different Dimensions)

case 2
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
Enter Element 7: 8
Enter Element 8: 9
Enter Element 9: 10

Matrix 2:
Enter Element 1: 1
Enter Element 2: 2
Enter Element 3: 3
Enter Element 4: 4
Enter Element 5: 5
Enter Element 6: 6
Enter Element 7: 7
Enter Element 8: 8
Enter Element 9: 9
Matrices are Not Equal

case 3
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
Enter Element 1: 1
Enter Element 2: 2
Enter Element 3: 3
Enter Element 4: 4
Enter Element 5: 5
Enter Element 6: 6
Enter Element 7: 7
Enter Element 8: 8
Enter Element 9: 9
Matrices are Equal
*/