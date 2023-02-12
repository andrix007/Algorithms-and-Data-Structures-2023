#include "WindGauge.h"

WindGauge::WindGauge(int period)
{
    windSpeedSum = 0;
    windSpeeds.clear();
    this->period = period;
}

double WindGauge::average() const
{
    return 1.0*windSpeedSum/(1.0*windSpeeds.size());
}

int WindGauge::lowest() const
{
    return windSpeedCounter.begin()->first;
}

int WindGauge::highest() const
{
    return windSpeedCounter.rbegin()->first;
}

void WindGauge::currentWindSpeed(int speed)
{
    if((int)windSpeeds.size() == period)
    {
        int deletedWindSpeed = windSpeeds.front();
        windSpeedSum -= deletedWindSpeed;
        windSpeeds.pop_front();

        int cnt = --windSpeedCounter[deletedWindSpeed];
        //cout << "deleted wind speed = " << deletedWindSpeed << " , cnt = " << cnt << '\n';
        if(cnt == 0)
            windSpeedCounter.erase(windSpeedCounter.find(deletedWindSpeed));
    }

    windSpeeds.push_back(speed);
    if(windSpeedCounter.find(speed) == windSpeedCounter.end())
        windSpeedCounter.insert(make_pair(speed, 1));
    else
        windSpeedCounter[speed]++;

    windSpeedSum += speed; 
}

void WindGauge::dump()
{
    cout << "Lowest wind speed is: " << lowest() << '\n';
    cout << "Highest wind speed is: " << highest() << '\n';
    cout << "Average wind speed is: " << average() << '\n';
    cout << '\n';
}

void WindGauge::showWindSpeeds()
{
    for(pair<int,int> aux : windSpeedCounter)
    {
        cout << aux.first << ' ' << aux.second << '\n';
    }
    cout << '\n';
}
