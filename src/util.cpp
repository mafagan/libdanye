
#include "util.h"

using namespace danye;

noncpyable::noncpyable(const noncpyable &){}

const noncpyable& noncpyable::operator=(const noncpyable&)
{
    return *this;
}