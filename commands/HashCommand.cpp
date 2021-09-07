//
// Created by yarin on 07/09/2021.
//

#include <iostream>
#include "HashCommand.h"
#include "string"
#include "../hashes/HashUtils.h"

using namespace std;

void HashCommand::onCommand(std::string strings[4]) {
    string word = strings[2];

    if (strings[1] == "sha256") {
        cout << "Sha256 Hash (" + word + "): " + HashUtils::genSha256Hash(word) + "\n";
    }
    else if (strings[1] == "md5") {
        cout << "MD5 Hash (" + word + "): " + HashUtils::genMD5Hash(word) + "\n";
    } else if (strings[1] == "sha1") {
        cout << "Sha1 Hash (" + word + "): " + HashUtils::genSha1Hash(word) + "\n";
    } else if (strings[1] == "sha384") {
        cout << "Sha384 Hash (" + word + "): " + HashUtils::genSha384(word) + "\n";
    } else if (strings[1] == "sha224") {
        cout << "Sha224 Hash (" + word + "): " + HashUtils::genSha224(word) + "\n";
    } else if (strings[1] == "sha512") {
        cout << "Sha512 Hash (" + word + "): " + HashUtils::genSha512(word) + "\n";
    }
}
