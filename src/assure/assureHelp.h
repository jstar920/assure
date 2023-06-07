#pragma once
#include <fstream>
#include <iostream>
#include <functional>

namespace assure
{
    class AssertInfo;
    using TestFunction = std::function<void(const std::string&, const std::string&)>;

    std::string bool2str(bool value)
    {
        return value ? "true" : "false";
    }

    template<typename T>
    std::stringstream& operator<< (std::stringstream&& ss, T value)
    {
        ss << "(...)";
        return ss;
    }

    void print(const std::string& info);

    int createTestCase(const std::string& caseName, const std::string& suiteName, TestFunction func);
    void handleAssertInfo(const AssertInfo& info);
}
