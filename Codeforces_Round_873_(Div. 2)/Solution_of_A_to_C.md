# Solution_of_A~C

## [A - Divisible Array](https://codeforces.com/contest/1828/problem/A)

### 题意：

给定一个 $n$ ，构造一个长度为 $n$ 的数组，满足：

* $1\le a_i\le 1000$
* $a_i$能被 $i$ 整除
* $\sum\limits_{i=1}^{n}a_i$能被$n$整除

### 题解：

任何数都可以被1整除，所以求出1~n的和，如果能被n整除直接输出，如果不能整除则在第一个元素上补齐

## [B - Permutation Swap](https://codeforces.com/contest/1828/problem/B)

### 题意：

给出一个乱序的排列，选择一个$k$，满足$i-j=k$的$a_i$和$a_j$可以进行交换，进行若干次交换后使该排序升序，找出最大的$k$

### 题解：

由题意可知，一个数进行交换回到自己原位置的过程中不管交换多少次，与初始位置的距离一定是k的倍数，所以将给出的排序与升序排序的元素做差求出需要走的距离，求出这些差值的$gcd$即可	

## [C - Counting Orders](https://codeforces.com/contest/1827/problem/A)
