//
// Created by yarin on 07/09/2021.
//

#include "iostream"
#include "CrackCommand.h"
#include "string"
#include "../files/FileReading.h"

using namespace std;

void CrackCommand::onCommand(std::string *strings) {
    string path = strings[2];
    string hash = strings[3];

    if (strings[1] == "sha256") {
        FileReading::scanFile("sha256", path, hash);
    } else if (strings[1] == "md5") {
        FileReading::scanFile("md5", path, hash);
    } else if (strings[1] == "sha1") {
        FileReading::scanFile("sha1", path, hash);
    } else if (strings[1] == "sha224") {
        FileReading::scanFile("sha224", path, hash);
    } else if (strings[1] == "sha384") {
        FileReading::scanFile("sha384", path, hash);
    } else if (strings[1] == "sha512") {
        FileReading::scanFile("sha512", path, hash);
    }
}
