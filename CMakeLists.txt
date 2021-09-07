cmake_minimum_required(VERSION 3.20)
project(HashlionCPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(HashlionCPP main/main.cpp commands/CommandHandler.cpp commands/CommandHandler.h hashes/HashUtils.cpp hashes/HashUtils.h hashes/md5.cpp hashes/md5.h files/FileReading.cpp files/FileReading.h hashes/sha1.cpp hashes/sha1.h commands/HashCommand.cpp commands/HashCommand.h commands/CrackCommand.cpp commands/CrackCommand.h hashes/sha2.cpp hashes/sha2.h)
