#ifndef HARL_HPP
#define HARL_HPP

#include <string>

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

    struct ComplainEntry {
        string key;
        ComplainFunc func;
    };

    static const int levelCount = 4;
    ComplainEntry complainMap[levelCount];

public:
    Harl();
    void complain(string level);
};

#endif