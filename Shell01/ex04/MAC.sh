#!/bin/sh
ifconfig | grep -oE '([0-9a-fA-f]{2}:){5}[0-9a-fA-f]{2}'
