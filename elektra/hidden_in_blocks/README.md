# ETFSD CTF 2021 – Hidden in Blocks
* **Category:** elektra
* **Points:** 200

## Challenge

> I'm being told theres a key on that FTP server as well, but this time its much more hidden. Are you up to the task?
## Hints

> Hint 1: Try checking all the documents on the FTP server
> Hint 2: The flag is hidden "inside" one of the files
## Solve

> Flag is appended to the end of crafting.pdf, strings crafting.pdf and then decode the hex string gives the key

```
key{m1n3c24f7_p20_bm90aGluZ3Rvc2Vl}
```
