// temperature_Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<Windows.h>

using namespace std;

void KelvintoCelsius(float n) {
    float ans = n - 273.15;
    cout << "Temperature in Celsius is :" << ans << "\370C\n" << endl;
}
void KelvintoFahrenheit(float n) {
    float ans = (n - 273.15) * 9 / 5 + 32;
    cout << "Temperature in Fahrenheit is : " << ans << "\370F\n" << endl;
}

void FahrenheittoCelsius(float n) {
    float ans = (n - 32) * 5 / 9;
    cout << "Temperature in Celsius is : " << ans << "\370C\n" << endl;
}
void FahrenheittoKelvin(float n) {
    float ans = (n - 32) * 5 / 9 + 273.15;
    cout << "Temperature in Kelvin is :" << ans << "\370K\n" << endl;
}

void CelsiustoFahrenheit(float n) {
    float ans = (n * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit is : " << ans << "\370F\n" << endl;
}
void CelsiustoKelvin(float n) {
    float ans = n + 273.15;
    cout << "Temperature in Kelvin is : "<< ans << "\370K\n" <<endl;
}
void convert(float num, char ch) {
    switch (ch) {
    case 'K':case 'k': {
        KelvintoCelsius(num);
        KelvintoFahrenheit(num);
        break; 
         }
    case 'C':case 'c': {
        CelsiustoKelvin(num);
        CelsiustoFahrenheit(num);
        break;
    }
    case 'F':case 'f': {
        FahrenheittoCelsius(num);
        FahrenheittoKelvin(num);
        break;
    }
    default : 
        cout << "Invalid unit of measurement,Try again";
        break;
   }
}

int main()
{
    
    cout << "TEMPERATURE CONVERTER \n\n";

    while (1) {
        float val;
        char ch;
        

        cout << "\nEnter temperature value : ";
        cin >> val;
        cout << "\nEnter unit of Measurement (eg : \370F,\370K,\370C) : ";
        cin >> ch;
        convert(val, ch);
        cout << "Press 'e' to exit or any other key to continue: ";
        char exitChoice;
        cin >> exitChoice;
        if (exitChoice == 'e' || exitChoice == 'E') {
            cout << "\nexiting in 3,2,1...";
            break;
        }
        system("cls");
        }
    return 0;
}
                                     
