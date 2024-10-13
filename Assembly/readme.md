#  Assembly language for ARM processor
## Materials
* https://pages.cs.wisc.edu/~remzi/Classes/537/Spring2018/Discussion/videos.html
* arm emulator : https://cpulator.01xz.net/?sys=arm
* https://github.com/palladian1/xv6-annotated
* https://github.com/rofirrim/raspberry-pi-assembler?tab=readme-ov-file

```bash
.global main  
.func main  
main:   
    mov R0, #30
    bx lr  
```
**.global main :** is our entry point and must be global.
**.fun main :**  is a function 
**MOV :** used to put the value into r0
**bx :** return to the main point
**lr :** the register is used to return fro the function 
**add :**  to add two number 
**adds :**  to add two number  with set the flag
```bash
.global main   
main:    
    mov r1, #3   
    mov r2, #4 
    add r0, r1, r2  /* r0 ← r1 + r2 */
    bx lr  
```

moving the value from register to other 
``` bash
    MOV R1,R0
```
to store value into stack .data

```bash
.data
list:
    .word 4,5,-9,1,0,2,-3
```
LDR : load data from stack to register 
the first data in list into R0
``` bash 
.global _start
start:
    LDR R0,=list
   
.data 
list:   
    .word 4,5,-9,1,0,2,-3
```
LDR: load the value in the R0 to R1
```bash
     LDR R1,[R0]
```
to get the next item in the list  

```bash
     LDR R2,[R0,#4]
```
for pre-increment   
```bash
     LDR R2,[R0,#4]!
```
for post-increment   
```bash
     LDR R2,[R0],#4
```
operation 
ADD SUB MUL 
use subs if you  do not know the number or have a negative number 
if yo have a cary use ADDS
AND ORR  ANDS to set the flag
BGT : branch greater than 
``` bash 
.global _start
start:
    mov r0,#1
    mov r1,#2
    cmp r0,r1

    BGT greater

greater:
    mov r2,#1
```