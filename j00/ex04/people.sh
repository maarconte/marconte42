ldapsearch -Q "(uid=z*)" cn | grep "^cn:" | sort -r | cut -d\  -f2 -f3
