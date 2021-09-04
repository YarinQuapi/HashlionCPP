//
// Created by yarin on 04/09/2021.
//

#include <string>
#include "HashUtils.h"
#include "hashes/sha256.h"
#include "hashes/md5.h"

std::string HashUtils::genSha256Hash(const std::string& str) {
    return sha256(str);
}

std::string HashUtils::genMD5Hash(const std::string& str) {
    return md5(str);
}

