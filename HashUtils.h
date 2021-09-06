//
// Created by yarin on 04/09/2021.
//

#ifndef HASHLIONCPP_HASHUTILS_H
#define HASHLIONCPP_HASHUTILS_H

class HashUtils {
public:
    static std::string genSha256Hash(const std::string&);
    static std::string genMD5Hash(const std::string&);
    static std::string genSha1Hash(const std::string&);
};

#endif //HASHLIONCPP_HASHUTILS_H
