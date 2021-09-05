//
// Created by yarin on 04/09/2021.
//

#include "FileReading.h"
#include "fstream"
#include "../HashUtils.h"
#include "iostream"

using namespace std;

void FileReading::scanFile(const std::string& hashType, const std::string& path, const std::string& hash) {
    std::ifstream input(path);

    const clock_t begin_time = clock();

    if (hashType == "sha256") {
        for (std::string line; getline(input, line);) {
            if (HashUtils::genSha256Hash(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds\n";
                break;
            }
        }
    } else if (hashType == "md5") {
        for (std::string line; getline(input, line);) {
            if (HashUtils::genMD5Hash(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds\n";
                break;
            }
        }
    }
}