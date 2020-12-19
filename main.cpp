#include "Include/folly/FBVector.h"
#include "Include/folly/FBString.h"
#include "Include/folly/portability/GTest.h"
#include "Include/folly/container/Foreach.h"

using namespace std;
using namespace folly;

int main() {
    fbvector<int> v(10, 20);
    EXPECT_EQ(v.size(), 10);
    FOR_EACH (i, v) { EXPECT_EQ(*i, 20); }
    FOR_EACH(i,v) {cout << *i << endl;}
}

