ifconfig -a ether | grep -v 'flag' | grep -v 'option' | sed 's/.*ether//g' | sed 's/ //g'
