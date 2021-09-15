//
// Created by yarin on 04/09/2021.
//

#include "FileReading.h"
#include "fstream"
#include "../hashes/HashUtils.h"
#include "iostream"

using namespace std;

void FileReading::scanFile(const std::string& hashType, const std::string& path, const std::string& hash) {
    std::ifstream input(path);

    const clock_t begin_time = clock();

    int counter = 0;

    if (hashType == "sha256") {
        string line;

        while (getline(input, line)) {
            counter++;

            if (HashUtils::genSha256Hash(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds and " << counter << " tries!\n";
                return;
            }
        }

        cout << "Couldn't crack hash after " << counter << " tries.";


    } else if (hashType == "md5") {
        for (std::string line; getline(input, line);) {
            counter++;

            if (HashUtils::genMD5Hash(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds and " << counter << " tries!\n";
                break;
            }
        }
    } else if (hashType == "sha1") {
        for (std::string line; getline(input, line);) {
            counter++;

            if (HashUtils::genSha1Hash(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds and " << counter << " tries!\n";
                break;
            }
        }
    } else if (hashType == "sha224") {
        for (std::string line; getline(input, line);) {
            counter++;

            if (HashUtils::genSha224(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds and " << counter << " tries!\n";
                break;
            }
        }
    } else if (hashType == "sha384") {
        for (std::string line; getline(input, line);) {
            counter++;

            if (HashUtils::genSha384(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds and " << counter << " tries!\n";
                break;
            }
        }
    } else if (hashType == "sha512") {
        for (std::string line; getline(input, line);) {
            counter++;

            if (HashUtils::genSha512(line) == hash) {
                cout << "Hash cracked! output: " << line << "\n";
                cout << "Cracking took " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds and " << counter << " tries!\n";
                break;
            }
        }
    }
}