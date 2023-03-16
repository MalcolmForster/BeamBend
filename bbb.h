//this file is to house the classes used for beambend; bbb = beambendbeam..... but others will probably exist.
#include <string>

using namespace std;

class Beam {
    private:
        string beamName;
        int beamLength;
        bool beamUniform;
    public:
        Beam(string name, int length, bool uniform);
};