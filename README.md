# assure
a small unit test framework

# Create test case

TEST_CASE(testName, testSuiteName)
## example: 
```C++
TEST_CASE("test1", "testsuites1")
{
    int a = 3, b = 2;
    ASSURE_EQ(a, b);
}
```

TEST_CASE_FIXTURE(className, testName, testSuiteName)
## example:
```C++
class Test_Fixture
{
public:
    int initValue {0};
};

TEST_CASE_FIXTURE(Test_Fixture, "test2", "testsuites1")
{
    ASSURE_EQ(initValue, 1);
}
```
