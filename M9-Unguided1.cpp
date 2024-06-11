#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix, const vector<string>& nodes) {
    int n = nodes.size();
    cout << setw(10) << " ";
    for (int i = 0; i < n; i++) {
        cout << setw(10) << nodes[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << setw(10) << nodes[i];
        for (int j = 0; j < n; j++) {
            cout << setw(10) << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    int MaulanaGhaniRolanda_2311102012;
    cout << "Silahkan masukan jumlah simpul: ";
    cin >> MaulanaGhaniRolanda_2311102012;
    cin.ignore(); // Membersihkan buffer input

    vector<string> simpul(MaulanaGhaniRolanda_2311102012);
    vector<vector<int>> bobot(MaulanaGhaniRolanda_2311102012, vector<int>(MaulanaGhaniRolanda_2311102012, 0));

    cout << "Silahkan masukan nama simpul" << endl;
    for (int i = 0; i < MaulanaGhaniRolanda_2311102012; i++) {
        cout << "Simpul " << i + 1 << ": ";
        getline(cin, simpul[i]);
    }

    cout << "Silahkan masukan bobot antar simpul" << endl;
    for (int i = 0; i < MaulanaGhaniRolanda_2311102012; i++) {
        for (int j = 0; j < MaulanaGhaniRolanda_2311102012; j++) {
            cout << simpul[i] << " --> " << simpul[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    cout << "\nMatriks Bobot:" << endl;
    printMatrix(bobot, simpul);

    return 0;
}
