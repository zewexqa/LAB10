#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;

    ifstream source("score.txt");
    while (getline(source, textline))
    {
        float value = stof(textline);
        sum += value;
        sum_of_square += value * value;
        count++;
    }

    source.close();

    float mean = sum / count;
    float standard_deviation = sqrt((sum_of_square / count) - (mean * mean));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << standard_deviation << "\n";

    return 0;
}
