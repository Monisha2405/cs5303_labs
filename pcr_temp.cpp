#include <iostream>

using namespace std;

double celsiusToFahrenheit (double c) {
    double conversion = (c*1.8) + 32.0;
    return conversion;
}

int main () {

    double temp;
    cout << "Enter denaturation temperature in Celsius: ";
    cin >> temp;
    temp = celsiusToFahrenheit (temp);

    cout << "Temperature in Fahrenheit." << temp << "F" << endl;

    return 0;
}