cat /etc/passwd | grep -v ^# | awk 'NR %2==0' | rev | sort -r | cut -d":" -f 7 | export FT_LINE1=1 FT_LINE2=2 | sed -n "$FT_LINE1, $FT_LINE2 p" | tr "\n" "," | sed "s/,/, /g" | sed "s/$/./"
