/*
	CH-231-A
	h3_p2.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <random>
#include <climits>
#include <functional>
#include <set>
#include <chrono>

using namespace std;

ofstream outA("bestCaseScenario.txt");
ofstream outB("worstCaseScenario.txt");
ofstream outC("averageCaseScenario.txt");
 
int randInRange(int low,int high)
{
    return low + rand() % (high - low + 1);
}

int fastSwap(int &a,int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void selectionSort(vector<int> &v)
{
    int n = v.size();
    for(int i = 0 ; i < n-1 ; i++)
    {
        int mi = i;
        for(int j = i+1 ; j < n ; j++)
            if(v[mi] > v[j])
                mi = j;
        if(mi != i)
            fastSwap(v[mi], v[i]);
    }

}

void print(vector<int> v)
{
    for(int elem : v)
        cout << elem << ' ';
    cout << '\n';
}

vector<int> generateBestCase(int n)
{
    vector<int>v;
    for(int i = 0 ; i < n ; i++)
        v.push_back(randInRange(1,2e9));
    sort(v.begin(),v.end());
    return v;
}

vector<int> generateAverageCase(int n)
{
    vector<int>v;
    for(int i = 0 ; i < n ; i++)
        v.push_back(randInRange(1,2e9));
    return v;
}

vector<int> generateWorstCaseA(int n, int elem) //increasing sequence > elem
{
    vector<int> a;
    set<int>st;
    for(int i = 0 ; i < n ; i++){
        st.insert(randInRange(elem+1,2e9));
    }
    while(st.size() < n)
        st.insert(randInRange(elem+1,2e9));
    for(set<int>::iterator it = st.begin() ; it != st.end() ; it++)
        a.push_back(*it);
    sort(a.begin(),a.end());
    return a;
}

vector<int> generateWorstCaseB(int n, int elem) //decreasing sequence < elem
{
    vector<int> b;
    set<int>st;
    for(int i = 0 ; i < n ; i++){
        st.insert(randInRange(1,elem-1));
    }
    while(st.size() < n)
        st.insert(randInRange(1,elem-1));
    for(set<int>::iterator it = st.begin() ; it != st.end() ; it++)
        b.push_back(*it);
    reverse(b.begin(),b.end());
    return b;
}

vector<int> generateWorstCase(int n)
{
    vector<int> a, b;
    int elem = randInRange(n, n+(n/2));
    if(n & 1)
    {
        a = generateWorstCaseA((n/2)+1, elem);
        b = generateWorstCaseB(n/2, elem);
    }
    else
    {
        a = generateWorstCaseA(n/2, elem);
        b = generateWorstCaseB(n/2, elem);
    }

    vector<int>v;

    for(int i = 0 ; i < n/2 ; i++)
        {
            v.push_back(a[i]);
            v.push_back(b[i]);
        }
    if(n & 1)
        v.push_back(a[a.size()-1]);
    return v;
}

chrono::duration<double> runBestCase(int n)
{
    chrono::system_clock::time_point start, end;
    chrono::duration<double> period;

    start = chrono::system_clock::now();

    vector<int>v = generateAverageCase(n);
    selectionSort(v);
    
    end = chrono::system_clock::now();

    period = end - start;
    return period;
}

chrono::duration<double> runAverageCase(int n,int it)
{
    chrono::system_clock::time_point start, end;
    chrono::duration<double> period, average = chrono::duration<double>::zero();

    while(it--)     
    {
        start = chrono::system_clock::now();
        vector<int>v = generateAverageCase(n);
        selectionSort(v);
        end = chrono::system_clock::now();
        period = end - start;
        average += period;
    }

    return average;
}

chrono::duration<double> runWorstCase(int n)
{
    chrono::system_clock::time_point start, end;
    chrono::duration<double> period;

    start = chrono::system_clock::now();

    vector<int>v = generateWorstCase(n);
    selectionSort(v);

    end = chrono::system_clock::now();

    period = end - start;
    return period;
}
vector<int>v;

int main()
{
    srand(time(NULL));
    for(int i = 1000 ; i <= 30000 ; i += 1000)
    {
        chrono::duration<double> bestCaseTime, worstCaseTime, averageCaseTime;
        bestCaseTime = runBestCase(i);
        averageCaseTime = runAverageCase(i, 5);
        worstCaseTime = runWorstCase(i);
        outA << i << " "  << bestCaseTime.count() << '\n';
        outB << i << " "  << worstCaseTime.count() << '\n';
        outC << i << " " << averageCaseTime.count()/5 << '\n';
    }
    return 0;
}