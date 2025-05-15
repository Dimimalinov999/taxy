# taxy 
A (not so) easy to use cli tax calculator with an interactive mode
## Building
If you noticed the makefile thus using make to compile it
if you wish to just compile to the gits root dir, you can use
```
make
```
or since its currently only 1 file
```
g++ ./main.cpp -o ./taxy
```
If you wish to install it (most likely to /usr/local/bin, since /usr/bin is reserverd for the system package manager)
You can eather (run the following command as root/sudo)
```
make install
```
Make sure to run make first.
## Use
Just like a regular 'ol argument only cli program.
<br>
Syntax:
```
taxy [tax percentage without the % sign] [annual revenue]
```
Example:
```
taxy 16 10000
```
Meaning it will deduct 16% from 10000.

Output:
```
$ taxy 16 10000
You owe: 1600
You are left with: 8400
```
