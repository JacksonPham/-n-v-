#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int a[100];
    int n;
    string FileName = "inPut.txt";
    fstream myFile;
    myFile.open(FileName, ios::in);
    if (myFile.fail()) {
        cout << "Khong mo duoc file" << FileName << endl;
        return 0;
    }
    myFile >> n;
    for (int i = 0; i < n; i++) {
        myFile >> a[i];
    }

    cout << "Da doc file " << FileName << " thanh cong" << endl;
    cout << endl;

    myFile.open(FileName, ios::in);
    myFile >> n;
    for (int i = 0; i < n; i++) {
        myFile >> a[i];
    }
    cout << "Doc du lieu tu file thanh cong!" << endl;
    cout << "Cac so chan: " << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    myFile.close();
    return 0;
}