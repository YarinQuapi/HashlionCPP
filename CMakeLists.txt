cmake_minimum_required(VERSION 3.20)
project(HashlionCPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(HashlionCPP main.cpp CommandHandler.cpp CommandHandler.h HashUtils.cpp HashUtils.h hashes/sha256.cpp hashes/sha256.h hashes/md5.cpp hashes/md5.h)
