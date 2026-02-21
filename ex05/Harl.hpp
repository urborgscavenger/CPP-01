#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <map>

// C# Style Aliases
typedef std::string string;
#define WriteLine(x) std::cout << x << std::endl

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    typedef void (Harl::*ComplainFunc)(void);
    std::map<string, ComplainFunc> complainMap;

public:
    Harl();
    void complain(string level);
};

#endif