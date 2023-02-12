#include <iostream>
#include <map>

using namespace std;

class Access 
{
public:
    void activate(unsigned int code, unsigned int level);
    void deactivate(unsigned int code);
    bool isactive(unsigned int code, unsigned int level) const;
private:
    map<unsigned int, unsigned int> c;
};

