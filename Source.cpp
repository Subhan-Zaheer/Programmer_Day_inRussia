#include<iostream>
#include<cstring>
#include<string>

using namespace std;

string dayOfProgrammer(int year) {

    string str1 = "";
    if (year == 1918) {
        str1 = "26.09." + to_string(year);
    }
    else if (year >= 1700 && year <= 1917 && year % 4 == 0) {
        str1 = "12.09." + to_string(year);
    }
    else if (year > 1918 && year <= 2700 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
          
            str1 = "12.09." + to_string(year);
        
    }
    else {
        str1 = "13.09." + to_string(year);
    }
    return str1;
}

int main() {
    string str1 = dayOfProgrammer(2017);
    cout << str1;
    return 0;
}
