#include "log/log.hpp"
using namespace std;

int main()
{
    spdlog::set_level(spdlog::level::debug);
    // change log pattern
    spdlog::set_pattern("[%H:%M:%S.%e] %v");
    Log::Info("Started Work");
    Log::Info("Done Now");
    return 0;
}