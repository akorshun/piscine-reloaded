ifconfig | grep "ether " | sed 's/^[[:space:]]ether[[:space:]]*//g' | sed s/' '//g
