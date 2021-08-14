#include"log/log.hpp"

int main(){
    spdlog::set_level(spdlog::level::debug);
    // change log pattern
    spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^--%L--%$] [thread %t] %v");

    Log::Info("Hello, World!!");
    return 0;
}