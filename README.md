# STav tEXT - STEXT

## how to use
1. clone this repo
2. cd into it
3. run `$ mkdir bin`, don't worry about mkdir errors
4. run make
5. STEXT will be located in `bin/main`

## customize
to customize the colours and various other aspects of the editor edit the-repo/config/config.h  
 
for example, to change the text colour from magenta to blue you would write the following
```bash
$ cd the-repo
$ ed config/config.h
P
*8c
#define BUFF_COLOUR "\033[1;34m"
.
w
q
$ make
```
