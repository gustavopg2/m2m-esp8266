# Evidencia - Clone e push na VM AWS

Aluno: Gustavo Peron Gothe (RA 22005726)

Instancia EC2: i-09c77d6b56adb4ac6 (M2M-AWS), Ubuntu 26.04 LTS, t3.small, regiao us-east-2 (Ohio)

IP publico: 18.224.54.190 | IP privado: 172.31.13.146

## Terminal da VM (EC2 Instance Connect)

```
ubuntu@ip-172-31-13-146:~$ git clone https://github.com/gustavopg2/m2m-esp8266.git
Cloning into 'm2m-esp8266'...
remote: Total 12 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (12/12), done.
ubuntu@ip-172-31-13-146:~$ cd m2m-esp8266
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ ls -l
-rw-rw-r-- 1 ubuntu ubuntu 197 Nov 21 06:38 README.md
-rw-rw-r-- 1 ubuntu ubuntu 139 Nov 21 06:38 mycode.cpp
-rw-rw-r-- 1 ubuntu ubuntu 154 Nov 21 06:38 mycode.ino
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ git config user.name gustavopg2
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ git config user.email gustavo.pg2@puccampinas.edu.br
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ echo commit feito pela vm aws >> README.md
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ git add README.md
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ git commit -m commit-feito-pela-vm-aws
[main 3969649] commit-feito-pela-vm-aws
 1 file changed, 1 insertion(+)
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ git push origin main
To https://github.com/gustavopg2/m2m-esp8266.git
   92b4e3f..3969649  main -> main
ubuntu@ip-172-31-13-146:~/m2m-esp8266$ git log --oneline
3969649 (HEAD -> main, origin/main, origin/HEAD) commit-feito-pela-vm-aws
92b4e3f Revise README with project details and author info
5112811 Add function to blink LED on specified pin
5d972c0 Add basic LED blinking functionality
efff287 Initial commit
```

O commit 3969649 foi criado dentro da VM e enviado ao GitHub com push (aparece no historico do repositorio).
