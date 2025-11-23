#pragma once
#include <string>
inline std::string nas_attach_request(const std::string& imsi){return "ATTACH_REQ:"+imsi;} inline std::string nas_attach_accept(){return "ATTACH_ACCEPT";}