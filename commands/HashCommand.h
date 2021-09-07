//
// Created by yarin on 07/09/2021.
//

#ifndef HASHLIONCPP_HASHCOMMAND_H
#define HASHLIONCPP_HASHCOMMAND_H
#include "CommandHandler.h"
#include "string"


class HashCommand {
public:
    static void onCommand(std::string string[4]);
};


#endif //HASHLIONCPP_HASHCOMMAND_H
