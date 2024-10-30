#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void task1() {
    ifstream inputFile("input.txt");
    ofstream positiveFile("positive.txt");
    ofstream negativeFile("negative.txt");

    if (!inputFile || !positiveFile || !negativeFile) {
        cerr << "Error opening files!" << endl;
        return;
    }

    double num;
    int positiveCount = 0, negativeCount = 0;

    while (inputFile >> num) {
        if (num >= 0) {
            positiveFile << num << " ";
            positiveCount++;
        } else {
            negativeFile << num << " ";
            negativeCount++;
        }
    }

    positiveFile << "\nCount: " << positiveCount << endl;
    negativeFile << "\nCount: " << negativeCount << endl;

    inputFile.close();
    positiveFile.close();
    negativeFile.close();
}

int main() {
    task1();
    return 0;
}
