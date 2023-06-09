#include "assure.h"

TEST_CASE("test1", "testsuites1")
{
    int a = 3, b = 2;
    ASSURE_EQ(a, b);
}