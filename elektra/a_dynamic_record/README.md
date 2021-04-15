# ETFSD CTF 2021 – A Dynamic Record
* **Category:** elektra
* **Points:** 100

## Challenge

> It seems there was an IP and a Port in the previous image as well, and I was told that there was some kind of record at that IP and Port. Can you find it?
## Hints

> Hint 1: This is a DNS server
> Hint 2: Trying using Dig to dump all records on the server
## Solve

> IP address and port is also a metadata attribute in the image from last challenge. Run the following command, flag is a txt record: dig @143.198.238.51 -p 10006 txt

```
etfsd{v32y_dyn4m1c_c3Rpbmt5}
```
