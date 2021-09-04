//
// Created by yarin on 04/09/2021.
//
#include <string>
#include <iostream>
#include "CommandHandler.h"
#include "HashUtils.h"
#define max 3
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
            string subStr = "";
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

    if (strings[0] == "hash") {
        string word = strings[2];

        if (strings[1] == "sha256") {
            cout << "Sha256 Hash (" + word + "): " + HashUtils::genSha256Hash(word) + "\n";
        }
        else if (strings[1] == "md5") {
            cout << "MD5 Hash (" + word + "): " + HashUtils::genMD5Hash(word) + "\n";
        }
    }
}