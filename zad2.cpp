#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void task2() {
    ifstream inputFile("input.txt");
    ofstream outputFile("negative_positions.txt");

    if (!inputFile || !outputFile) {
        cerr << "Error opening files!" << endl;
        return;
    }

    vector<double> numbers(20);
    int negativeCount = 0;

    for (int i = 0; i < 20 && inputFile >> numbers[i]; i++) {
        if (numbers[i] < 0) {
            outputFile << "Position: " << i << ", Value: " << numbers[i] << endl;
            negativeCount++;
        }
    }

    cout << "Number of negative numbers: " << negativeCount << endl;

    inputFile.close();
    outputFile.close();
}

int main() {
    task2();
    return 0;
}
