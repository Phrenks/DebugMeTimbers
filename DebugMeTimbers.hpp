#include <map>

using namespace std;

map<string, bool> factive;
#define debug(fname, function) do { if(factive[fname] == true) function; } while (0)
#define add(fname, active) do { factive.insert(std::pair<string, bool>(fname, active)); } while (0)
