#include "Access.h"

void Access::activate(unsigned int code, unsigned int level)
{
    if(c.find(code) != c.end())
    {
        c[code] = level;
        return;
    }
    c.insert(make_pair(code,level));
}

void Access::deactivate(unsigned int code)
{
    c.erase(code);
}

bool Access::isactive(unsigned int code, unsigned int level) const
{
    if(c.find(code) == c.end()) 
        return false;

    //did this because the interface of the class requires 'const'
    unsigned int access_level = c.find(code)->second;
    return level <= access_level;
}
