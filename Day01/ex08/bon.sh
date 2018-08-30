ldapsearch -Q -LLL | grep sn: | cut -c 4- | grep -i bon | wc -l | tr -d " "
