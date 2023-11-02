#ifndef _IBOX
#define _IBOX

#include <string>

using namespace std;

class IBox {
    public:
        virtual int getVolume() = 0;
        virtual string getColor() = 0;
};

#endif