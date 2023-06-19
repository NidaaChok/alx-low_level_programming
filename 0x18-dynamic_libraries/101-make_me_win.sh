#!/bin/bash
 wget -q -O /tmp/iwin.so https://github.com/NidaaChok/alx-low_level_programming/raw/master/iwin.so
 export LD_PRELOAD=/tmp/iwin.so
