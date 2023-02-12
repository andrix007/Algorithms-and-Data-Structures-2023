/*
	CH-231-A
	h2_p5.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <set>

using namespace std;

int getRand649()
{
    return (int)(rand()%49+1);
}

set<int>lotto;

int main()
{
    srand(time(NULL));
    for(int i = 0 ; i < 6 ; i++)
    {
        int nr = getRand649();
        lotto.insert(nr);
    }
    for(set<int>::iterator it = lotto.begin() ; it != lotto.end() ; it++)
        cout << *it << ' ';
    cout << '\n';
    return 0;
}