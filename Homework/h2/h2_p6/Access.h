#include <iostream>
#include <set>

using namespace std;

class Access 
{
public:
    void activate(unsigned int code);
    void deactivate(unsigned int code);
    bool isactive(unsigned int code) const;
private:
    set<unsigned int>c; //c from codes
};

