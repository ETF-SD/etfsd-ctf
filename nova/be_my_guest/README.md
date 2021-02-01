# ETFSD CTF 2021 – Be my guest

* **Category:** nova
* **Points:** 100

## Challenge

> Access the web server and login with guest credentials
## Hints

> Hint 1: Look at the wireshark capture

## Solve

> Double click on the packet which contains a POST request to the webserver. If you open the ``application/x-www-form-encoded`` tab (which contains the data sent by the html form)  you will see the guest username and password.

```
etfsd{gu35t_329941267154}
```
