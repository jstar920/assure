#include "assureHelp.h"
#include "assureSession.h"

namespace assure
{

    void print(const std::string& info)
    {
    }

    int createTestCase(const std::string& caseName, const std::string& suiteName, TestFunction func)
    {
        AssureSession::getInstance().addTest(caseName, suiteName, [caseName, suiteName, func](){ func(caseName, suiteName);});
    }

    void handleAssertInfo(const AssertInfo& info)
    {
    }
}
