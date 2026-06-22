#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "passwords.h"

using std::string;

bool login(string name, string password)
{
    return userExists(name) && (getPassword(name) == password);
}

#endif
