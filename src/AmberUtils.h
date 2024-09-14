#pragma once

#include <iostream>
#include <vector>

std::vector<std::string> GrabContents(std::string file_name);
void ThrowSTDError(std::string reason);
void ThrowError(std::string reason, int line);
void ThrowWarning(std::string reason);
void ThrowState(std::string state);