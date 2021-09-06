#!/bin/sh
echo "\e[32m"
echo "Running build command"
echo "\e[39m"
ninja -C build
echo "\e[32m"
echo "Running executable"
echo "\e[39m"
bin/cp < data/stdin | tee data/stdout
echo "\e[39m"
