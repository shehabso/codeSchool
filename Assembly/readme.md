#  Assembly language for ARM processor
## Materials
* https://pages.cs.wisc.edu/~remzi/Classes/537/Spring2018/Discussion/videos.html
* **arm emulator:** https://cpulator.01xz.net/?sys=arm
* https://github.com/palladian1/xv6-annotated
* https://github.com/rofirrim/raspberry-pi-assembler?tab=readme-ov-file
* https://thinkingeek.com/ 
* https://azeria-labs.com/writing-arm-assembly-part-1/

### based upon RISC Architecture with enhacememnts to meet requiremnets of emedded applications 
* A large uniform register file 
* load -store architecture
* fixed lenght instructions 
* 32-bit processors (v1-v7), 64bit processor(v8)
**Halfword** means 16 bits (two bytes)
**Word** means 16 bits (four bytes)
**Doubleword** Means 64 bits (eight bytes)

####  ARM cores impelemnets two basic instruction sets 
**ARM** instruction set -instructions ara all 32 bits long 
**THUMB** instructions set ara a mix 16 and 32 bits 

**CPSR**  T=0 no THUMB , T=1 THUMB
=======
* https://github.com/mschwartz/assembly-tutorial 
```bash
.global main  
.func main  
main:   
    mov R0, #30
    bx lr  
```
**.global main :** is our entry point and must be global. <br /> 
**.fun main :**  is a function . <br /> 
**.data :**  to store the value in the stack . <br /> 
**loop:**  reserved keyword use to interative . <br /> 
**MOV :** used to put the value into r0 . <br /> 
**bx :** return to the main point . <br /> 
**lr :** the register is used to return fro the function . <br /> 
**add :**  to add two number .
**adds :**  to add two number  with set the flag . <br /> 
```assembly
.global main   
main:    
    mov r1, #3   
    mov r2, #4 
    add r0, r1, r2  /* r0 ← r1 + r2 */
    bx lr  
```

**.data**: the data segment, which is where global or static data is stored. The data segment is used to define variables and constants that the program might use.
**.word** :tells the assembler that you want to reserve space for 32-bit data 
values.  <br /> 
**list** : This is a label that marks a memory location
```bash
.data
list:
    .word 4,5,-9,1,0,2,-3
```
LDR : load data from stack to register \
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
operation : ADD SUB MUL <br /> 
use subs:if you  do not know the number or have a negative number <br /> 
if yo have a cary use ADDS <br /> 
AND ORR  ANDS to set the flag <br /> 
BGT : branch greater than  <br /> 

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
void main(void){\
r1=0;\
r2=0;\
for(int r2=0;r2=<22;r2++){\
    r1+=r2;\
 }\
 r0=r1;\
}
``` bash 
.text 
.global main
main:
    mov r1, #0       /* r1 ← 0 */
    mov r2, #1       /* r2 ← 1 */
loop: 
    cmp r2, #22      /* compare r2 and 22 */
    bgt end          /* branch if r2 > 22 to end */
    add r1, r1, r2   /* r1 ← r1 + r1 */
    add r2, r2, #1   /* r2 ← r2 + 1 */
    b loop
end:
    mov r0, r1       /* r0 ← r1 */
    bx lr

```
other way of implementation  
``` bash 
.text
.global main
main:
    mov r1, #0       /* r1 ← 0 */
    mov r2, #1       /* r2 ← 1 */
    b check_loop     /* unconditionally jump at the end of the loop */
loop: 
    add r1, r1, r2   /* r1 ← r1 + r1 */
    add r2, r2, #1   /* r2 ← r2 + 1 */
check_loop:
    cmp r2, #22      /* compare r2 and 22 */
    ble loop         /* branch if r2 &lt;= 22 to the beginning of the loop */
end:
    mov r0, r1       /* r0 ← r1 */
    bx lr
```