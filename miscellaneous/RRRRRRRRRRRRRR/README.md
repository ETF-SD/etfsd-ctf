# ETFSD CTF 2021 – RRRRRRRRRRRRRRRRR

- **Category:** miscellaneous
- **Points:** 75

## Challenge

> Looks like we've got yet another faulty binary with a condition that'll never be true... can you get around it? Please? Our enemy company's secrets are in there somewhere...

## Hints

> gdb is cool

## Solve

> strcmp will never pass so just pop open gdb, break at the strcmp call, overwrite rax, step until win()

```
etfsd{r3v_1s_w31rd}
```
