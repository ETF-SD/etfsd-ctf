# ETFSD CTF 2021 – Creds?
* **Category:** nova
* **Points:** 200

## Challenge

> Our cyber operations team has learned about an exposed API leaking admin credentials, use this vulnerability to collect the admin credentials and find the flag.
## Hints

> Hint 1: Look at inspect element.

## Solve

> Once you log in as guest, go to inspect element and look at the network tab. You will see a request sent to a creds endpoint. The request returns a 400 error as it is not authorized. If you look closer you will see that in the request body "isAuthorized" is set to false. Send a post request to the endpoint with "isAuthorized" set to true and you will recieve the admin credentials (the password is the flag).

```
etfsd{@dm1n_@cc3ss_2255585438}
```
