#ifndef _COMMAND_HPP_
#define _COMMAND_HPP_
#include <string>
#include <functional>

class Command {
public:
    void excute();
private:
    std::string name;
    std::string brief_info;
    std::function<void(int, char **)> func;
    std::function<void(void)> print_help;
};

#endif