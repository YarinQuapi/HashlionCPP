//
// Created by yarin on 04/09/2021.
//

#ifndef HASHLIONCPP_FILEREADING_H
#define HASHLIONCPP_FILEREADING_H
#include "string"

class FileReading {
public:
    static void scanFile(const std::string& hashType, const std::string& path, const std::string& hash);
};


#endif //HASHLIONCPP_FILEREADING_H
