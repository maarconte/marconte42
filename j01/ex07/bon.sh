ldapsearch -QLLL "(sn=*BON)" sn | grep -v ^dn | sed '/^\s*$/d' | wc -l
