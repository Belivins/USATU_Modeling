#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;

string convertFromIntToString(int n) {
    ostringstream buf;
    buf << n;
    return buf.str();
}

int main() {
   int currentX = 2424;
    for (int i = 0; i < 100; i++) {
        cout << float(currentX) / 10000.0 << endl;
        string nextXSTR = convertFromIntToString(currentX * currentX).substr(2, 4);;
        currentX = atoi(nextXSTR.c_str());
    }
}
