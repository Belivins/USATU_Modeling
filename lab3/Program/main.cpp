#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;

string podstr(string x);
string convertFromIntToString(int n);
int convertFromStringToInt(string str);

int main () {
    int k = 4;
    int currentX = 2424;
    for (int i = 0; i < 100; i++) {
        cout << float(currentX)/10000 << endl;
        int nextX = currentX*currentX;
        string nextXSTR = convertFromIntToString(nextX);
        nextXSTR = podstr(nextXSTR);
        currentX = convertFromStringToInt(nextXSTR);
    }
}

string convertFromIntToString(int n) {
	ostringstream buf;
	buf << n;
	return buf.str();
}

int convertFromStringToInt(string str) {
    return atoi(str.c_str());
}

string podstr(string x) {
	string sub = x.substr(2,4);
	return sub;
}
