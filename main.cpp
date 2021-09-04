#include <windows.h>
#include <string>
#include <iostream>
#include "CommandHandler.h"

using namespace std;

typedef std::string str;

bool running = true;

int main() {
    while (running) {
        str title = "HashLion C++";
        SetConsoleTitle(title.c_str());

        string cmd;
        getline(cin, cmd);

        CommandHandler::handleCommand(cmd);
    }
}
