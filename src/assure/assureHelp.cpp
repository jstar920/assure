#include "assureHelp.h"

namespace assure
{
    static bool assureHasLog {false};
    static std::ofstream assure_of;
    static std::ostream assure_cout;

    void setHasLog(bool hasLog)
    {
        assureHasLog = hasLog;
    }

    bool hasLog()
    {
        return assureHaslog;
    }

    void setOfstream(std::ofstream& of)
    {
        assure_of = of;
    }

    std::ofstream& getOfstream()
    {
        return assure_of;
    }

    void setCout(std::ostream& os)
    {
        assure_cout = os;
    }

    std::ostream& getCout()
    {
        return assure_cout;
    }

    void print(const std::string& info)
    {
        assure_cout << info << std::endl;;
        if (assureHasLog)
        {
            assure_of << info;
        }
    }
    `
    void handleAssertInfo(const AssertInfo& info)
    {
    }
}
