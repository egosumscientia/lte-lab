#include "../lib/utils/log.hpp"
#include <unistd.h>
#include "../lib/nas/nas.hpp"
#include "enb_context.hpp"
void enb_run(){ log("ENB","Running"); while(true){sleep(1);} }