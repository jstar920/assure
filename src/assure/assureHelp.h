namespace assure
{
    void setHasLog(bool hasLog);
    bool hasLog();
    void setOfstream(std::ofstream&);
    void setCout(std::ostream&);
    std::ofstream& getOfstream();
    std::ostream& getCout();

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
    void handleAssertInfo(const AssertInfo& info);
}
