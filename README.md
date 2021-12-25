#### Their is more than 0 and 1. Their is -1, 0 and 1 "Trinaire".
To know how do i discovered the "-1". We have to run a few examples.

The number 2 with binary mask 1 in 32 bit format wich is an integer is stored in c language in an "int" like 2:

2 = 2 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0

The number 2147483647 with binary mask 1 in 32 bit format is stored in an "int" like 2147483647:

2147483647 = 2147483647 = 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

The number 2147483648 with binary mask 1 in 32 bit format is stored in an "int" like -2147483648:

2147483648 = -2147483648 = -1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

We can observe that the number 2147483647 in binary is 0 at the most significant bit and 1's at the other bits. After adding one to the int 21474    83647 it become now -2147483648 and in binary it's a -1 at the most significant bit and 0's at the other bits.

---
###### The line of bits of ints
![alt text](https://github.com/lahbabic/c_hack/blob/main/triangular_function_of_ints.png)
---
0 1 4 2 8 12 3 13 7 5 11 15 24 25 19 (26 9) 14 18 27 28 22 (29 11) (44 8) (37 12) (30 3) (40 4) (25 7) (41 5) (47 11) (44 8) (42 6) 6 
