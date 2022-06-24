#!/bin/bash
make clean
clear
make LF=0 > /dev/null && ./a.out
