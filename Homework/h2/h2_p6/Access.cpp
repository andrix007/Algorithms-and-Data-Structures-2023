#include "Access.h"

void Access::activate(unsigned int code)
{
    c.insert(code);
}

void Access::deactivate(unsigned int code)
{
    c.erase(code);
}

bool Access::isactive(unsigned int code) const
{
    return (c.find(code) != c.end());
}
