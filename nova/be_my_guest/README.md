# ETFSD CTF 2021 – Be my guest

* **Category:** nova
* **Points:** 100

## Challenge

> The Nova website has been compromised by 7 phantoms and the passwords have been changed. Use the PCAP file and domain name you found from the previous challenge to find and log in with the guest credentials.
## Hints

> Hint 1: Look for HTTP requests

## Solve

> Double click on the packet which contains a POST request to the webserver. If you open the ``application/x-www-form-encoded`` tab (which contains the data sent by the html form)  you will see the guest username and password.

```
etfsd{gu35t_329941267154}
```
