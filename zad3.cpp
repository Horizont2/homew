#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void task3() {
    ifstream inputFile("input.txt");
    ofstream outputFile("sorted_output.txt");

    if (!inputFile || !outputFile) {
        cerr << "Error opening files!" << endl;
        return;
    }

    vector<double> positive, zeros, negative;
    double num;

    while (inputFile >> num) {
        if (num > 0) positive.push_back(num);
        else if (num == 0) zeros.push_back(num);
        else negative.push_back(num);
    }

    for (double p : positive) outputFile << p << " ";
    for (double z : zeros) outputFile << z << " ";
    for (double n : negative) outputFile << n << " ";

    inputFile.close();
    outputFile.close();
}

int main() {
    task3();
    return 0;
}
