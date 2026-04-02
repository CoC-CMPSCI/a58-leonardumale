#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int N;
    double score1, score2;
    string stuName;
    ofstream ofs;

    ofs.open("students.txt");

    if (!ofs)
    {
        cout << "Error opening file" << endl;
        exit(0);
    }

    cin >> N;
    ofs << N << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> stuName >> score1 >> score2;
        ofs << stuName << " " << score1 << " " << score2 << endl;
    }

    ofs.close();

    int M;
    double sum, avg;
    ifstream ifs;

    ifs.open("students.txt");

    if (!ifs)
    {
        cout << "Error opening file" << endl;
        exit(0);
    }

    ifs >> M;
    cout << "Total " << M << " students" << endl;

    for (int i = 0; i < M; i++)
    {
        ifs >> stuName >> score1 >> score2;

        sum = score1 + score2;
        avg = sum / 2.0;

        cout << "Student Name: " << stuName
             << " score1: " << score1
             << " score2: " << score2
             << " Sum: " << sum
             << " Avg: " << avg << endl;
    }

    ifs.close();

    return 0;
}
