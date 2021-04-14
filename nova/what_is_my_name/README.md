# ETFSD CTF 2021 – What is my name?
* **Category:** nova
* **Points:** 50

## Challenge

> The 7 Phantoms have relocated the Nova web server, find it using a wireshark capture taken by our cyber operations team. Find the domain name (not ip address) of the nova server from this wireshark capture.
> Answer Format: etfsd{<domain name>}
## Hints

> Hint 1: Look for DNS requests

## Solve

> In the wireshark capture, if you look at the "Host" header of any of the HTTP requests, you will see it points to 646162616279.etfsd.org

```
etfsd{646162616279.etfsd.org}
```
