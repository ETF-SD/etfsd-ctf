# ETFSD CTF 2021 – What is my name?
* **Category:** nova
* **Points:** 50

## Challenge

> Find the domain name (not ip address) of the nova server from this wireshark capture.
> Answer Format: etfsd{<domain name>}
## Hints

> Hint 1: Look for DNS requests

## Solve

> In the wireshark capture you will a DNS query for the ip address of <domain name>, which is the Nova server.

```
etfsd{<domain name>}
```
