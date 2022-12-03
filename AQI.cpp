#include <iostream>
#include "AirQualityIndexCalculator/carbon.h"
#include "AirQualityIndexCalculator/pm2.h"
#include "AirQualityIndexCalculator/pm10.h"
#include "AirQualityIndexCalculator/prescription.h"
#include "AirQualityIndexCalculator/MainMenu.h"
#include <Windows.h>
#include <string>
using namespace std;

void startMenu()
{
	int select;

	cout << "\t\t\t\t ****** CLIMATE CONTROL ******\n\n";

}

 


int main()
{
	
	system("COLOR 3F");
	startMenu();
	MainMenu();
	return 0;
}
