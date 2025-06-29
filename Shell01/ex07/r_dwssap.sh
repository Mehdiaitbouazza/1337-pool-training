#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk -F: 'NR % 2 == 0 {print $1}' | while IFS= read -r login; do echo "$login" | rev; done | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | awk '{printf "%s%s", (NR==1?"":","), $0} END {print "."}'
