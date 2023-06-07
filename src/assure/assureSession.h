#pragma once
#include <memory>
#include <map>
#include <string>
#include <functional>

namespace assure
{
    using AssureTestCasePtr = std::shared_ptr<class AssureTestCase>;
    using AssureTestSuitePtr = std::shared_ptr<class AssureTestSuite>;
    using AssureConfigPtr = std::shared_ptr<class AssureConfig>;
    using TestFunc = std::function<void()>;

    class AssureSession
    {
    public:
        static AssureSession& getInstance();
    private:
        AssureSession();
    public:
        AssureConfigPtr config();
        void excute();
        void addTest(const std::string& testCaseName, const std::string& testSuiteName, const TestFunc& func);
    private:
        AssureConfigPtr config_;
        std::map<std::string, AssureTestSuitePtr> testSuites_;
    };
}