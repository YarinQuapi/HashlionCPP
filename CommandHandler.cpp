//
// Created by yarin on 04/09/2021.
//
#include <string>
#include "CommandHandler.h"
#include "commands/HashCommand.h"
#include "commands/CrackCommand.h"
#include "iostream"
#define max 4
using namespace std;

string strings[max];

int len(string str)
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void split (string str, char seperator)
{
    int currIndex = 0, i = 0;
    int startIndex = 0, endIndex = 0;
    while (i <= len(str))
    {
        if (str[i] == seperator || i == len(str))
        {
            endIndex = i;
            string subStr;
            subStr.append(str, startIndex, endIndex - startIndex);
            strings[currIndex] = subStr;
            currIndex += 1;
            startIndex = endIndex + 1;
        }
        i++;
    }
}

void CommandHandler::handleCommand(std::string commandArgs) {
    split(std::move(commandArgs), ' ');

    if (strings[0] == "help") {
        cout << " • hash <hashType [sha256,md5,sha1]> <textToHash>\n";
        cout << " • crack <hashType [sha256,md5,sha1]> <pathToWordFile> <hashToCrack>";
    } else if (strings[0] == "hash") {
        HashCommand::onCommand(strings);
    } else if (strings[0] == "crack") {
        CrackCommand::onCommand(strings);
    }
}