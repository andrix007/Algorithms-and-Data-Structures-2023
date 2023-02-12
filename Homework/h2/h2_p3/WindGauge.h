#include <deque>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

class WindGauge 
{
public:
    WindGauge(int period = 12);
    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    double average() const;
    void dump();
    void showWindSpeeds();
private:
    deque<int> windSpeeds;
    //I use map as a frequency vector so I can compute lowest and highest 
    //wind speed in O(log) time 
    map<int,int> windSpeedCounter;
    //I keep the sum of the speeds so I can compute the average in O(1) time
    int windSpeedSum = 0;
    int period;
};
