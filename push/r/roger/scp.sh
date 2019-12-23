scp -P 2212 -r html h@10.11.254.253:/home/h
ssh h@10.11.254.253 -p 2212 "sudo -S sh deploy.sh"
