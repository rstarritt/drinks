/* drinks is a program to help you decide what to drink.
    Copyright (C) 2018  Ross Starritt

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see https://www.gnu.org/licenses/

*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
#include <time.h>

using namespace std;

const string fileName = "BEvERages.csv";
int main() {
    vector<string> drinks;//stores the drinks
    fstream fin;//reads the file
    srand(time(0));
    int index = 0;

    try {//open drinks file and then read contents to drinks vector
        fin.open(fileName, ios::in);
    } catch (exception e) {
    cout << "Drinks not found. Please locate the BEvERages file." << endl;
    }

    if (fin.is_open()) {
        string item;
        while(getline(fin,item,',')) {
            drinks.push_back(item);
        }
    }
    fin.close();

    //present the user with a drink
    cout << "Let's have a drink!" << endl;
    index = rand() % drinks.size();
    cout << "How about a " << drinks.at(index) << "?" << endl;
    return 0;
}
