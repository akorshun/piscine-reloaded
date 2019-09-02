ifconfig | grep "ether " | sed 's/^[[:space:]]ether[[:space:]]*//g' | rev | cut -c5- | rev
