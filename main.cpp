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

using namespace std;
// use a vector to store a number of drinks and randomly select one for the user to drink.
int main()
{
    vector<string> drinks;
    drinks.push_back("Mojito");

    cout << "Let's have a drink!" << endl;

    cout << "How about a " << drinks.at(0) << "?" << endl;
    return 0;
}
