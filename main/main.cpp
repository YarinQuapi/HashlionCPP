#include <windows.h>
#include <string>
#include <iostream>
#include "../commands/CommandHandler.h"

#define version "0.1-Experimental"

using namespace std;

typedef std::string str;
bool running = true;

int main() {
    str title = "HashLion C++ " version;
    SetConsoleTitle(title.c_str());

    cout << "Welcome to Hashlion C++ edition"
         << "\nThis version is still highly experimental and might have bugs\n"
            "Use 'help' for more info.\n";

    while (running) {
        cout << "\n$ ";

        string cmd;
        getline(cin, cmd);

        CommandHandler::handleCommand(cmd);
    }
}
