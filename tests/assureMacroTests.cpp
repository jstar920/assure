#include "assure.h"

TEST_CASE("test1", "testsuites1")
{
    int a = 3, b = 2;
    ASSURE_EQ(a, b);
}

class Test_Fixture
{
public:
    int initValue {0};
};

TEST_CASE_FIXTURE(Test_Fixture, "test2", "testsuites1")
{
    ASSURE_EQ(initValue, 1);
}