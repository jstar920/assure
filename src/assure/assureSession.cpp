#include "assureSession.h"
#include "assureTestCase.h"
#include "assureConfig.h"
namespace assure
{
    AssureSession&  AssureSession::getInstance()
    {
        static AssureSession session;
        return session;
    }

    AssureSession::AssureSession()
    : config_(std::make_shared<AssureConfig>())
    {
    }

    std::shared_ptr<AssureConfig> AssureSession::config()
    {
        return config_;
    }

    void AssureSession::excute()
    {
        for (auto it = testSuites_.cbegin(); it != testSuites_.cend(); ++it)
        {
            it->second->excute();
        }
    }

    void AssureSession::addTest(const std::string& testCaseName, const std::string& testSuiteName, const TestFunc& func)
    {
        const auto testCase = std::make_shared<AssureTestCase>(testCaseName, func, config_);
        const auto it = testSuites_.find(testSuiteName);
        const auto testSuite = (it != testSuites_.end()) ?  it->second : std::make_shared<AssureTestSuite>(testSuiteName, config_);
        testSuite->addTest(testCase);

        if (it == testSuites_.end())
        {
            testSuites_.emplace(testSuite);
        }
    }
}