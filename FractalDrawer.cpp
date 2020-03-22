#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Fractal.h"

/**
 * i used the namespace for simplicity.
 */
using namespace std;

/**
 * This function receives a line and checks if its legal or not .
 * line with more than 3 columns is not legal.
 * line with values that differ from the required is not legal
 * @param line
 * @return true if the line is as required, false otherwise.
 */
bool checkline(string line)
{
    if (line.at(line.length() - 1) == '\r' || line.at(line.length() - 1) == '\n')
    { // lines may be ending with \r,\n.
        line.erase(line.size() - 1);
    }
    if (line.length() != 3)
    {
        cout << "Invalid input" << endl;
        return false;
    }
    if (line[0] - '0' < 1 || line[0] - '0' > 3)
    {
        cout << "Invalid input" << endl;
        return false;
    }
    if (line[1] != ',')
    {
        cout << "Invalid input" << endl;
        return false;
    }
    if (line[2] - '0' < 1 || line[2] - '0' > 6)
    {
        cout << "Invalid input" << endl;
        return false;
    }
    return true;
}

/**
 * This function receives a vector and a line , creates an appropriate fractal according to the line.
 * @param vect
 * @param currentline
 */
void addtovec(vector<Fractal *> &vect, string currentline)
{
    if (currentline[0] - '0' == 1)
    {
        auto *currentfractal = new Carpet;
        currentfractal->setheight(currentline[2] - '0');
        vect.push_back(currentfractal);
    }
    if (currentline[0] - '0' == 2)
    {
        auto *currentfractal = new Sieve;
        currentfractal->setheight(currentline[2] - '0');
        vect.push_back(currentfractal);
    }
    if (currentline[0] - '0' == 3)
    {
        auto *currentfractal = new Dust;
        currentfractal->setheight(currentline[2] - '0');
        vect.push_back(currentfractal);
    }
}

/**
 * main function which runs the program ,
 * we receive a file and creates fractals according to the file content.
 * @param argc
 * @param argv
 * @return 0 if the programs runs ok , 1 otherwise.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: FractalDrawer <file path>" << endl;
        exit(EXIT_FAILURE);
    }
    string line;
    vector<Fractal*> fractals;
    fstream file;
    file.open(argv[1], std::fstream::in | std::fstream::out);
    if (!file.is_open())
    {
        cerr << "Usage: FractalDrawer <file path>" << endl;
        exit(EXIT_FAILURE);
    }
    while (getline(file, line))
    {
        if (!checkline(line))
        {
            file.close();
            exit(EXIT_FAILURE);
        }
        addtovec(fractals, line);
    }
    for (unsigned long i = fractals.size(); i > 0; --i)
    {
        fractals.at(i - 1)->draw();
        cout << endl;
    }
    file.close();
    return EXIT_SUCCESS;
}


