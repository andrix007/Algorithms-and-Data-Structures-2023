/*
	CH-231-A
	h2_p3.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include "WindGauge.h"

using namespace std;

int main()
{
    WindGauge w;

    w.currentWindSpeed(15);
    w.currentWindSpeed(16);
    w.currentWindSpeed(12);
    w.currentWindSpeed(15);
    w.currentWindSpeed(15);

    //w.showWindSpeeds();
    w.dump();

    w.currentWindSpeed(16);
    w.currentWindSpeed(17);
    w.currentWindSpeed(16);
    w.currentWindSpeed(16);
    w.currentWindSpeed(20);
    w.currentWindSpeed(17);
    w.currentWindSpeed(16);
    w.currentWindSpeed(15);
    w.currentWindSpeed(16);
    w.currentWindSpeed(20);

    //w.showWindSpeeds();
    //w.currentWindSpeed(20);

    //w.showWindSpeeds();
    w.dump();
    
    return 0;
}