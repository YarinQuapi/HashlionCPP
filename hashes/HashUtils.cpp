//
// Created by yarin on 04/09/2021.
//

#include <string>
#include "HashUtils.h"
#include "sha2.h"
#include "md5.h"
#include "sha1.h"

std::string HashUtils::genSha256Hash(const std::string& str) {
    return sha256(str);
}

std::string HashUtils::genMD5Hash(const std::string& str) {
    return md5(str);
}

std::string HashUtils::genSha1Hash(const std::string& str) {
    return sha1(str);
}

std::string HashUtils::genSha512(const std::string &str) {
    return sha512(str);
}

std::string HashUtils::genSha224(const std::string &str) {
    return sha224(str);
}

std::string HashUtils::genSha384(const std::string &str) {
    return sha384(str);
}
