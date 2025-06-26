# homework第二章



# lab环境配置

打开Linux终端（我用的是Ubuntu），安装插件：

```ubuntu
sudo apt-get install build-essential
sudo apt-get install gcc-multilib
sudo apt-get install gdb
```

您的目标是修改bits.c的副本，使其通过btest中的所有测试，而不违反任何编码准则。

# lab第二章

## 

## bitXor

用位表示异或运算：“^”，首先要明白什么是异或，口诀是：**不同为1，相同为0。**

例如：0b1011 ^ 0b0001 = 0b1010

```c
/* 
* bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
  return ~(~(x & ~y) & ~(y & ~x));
}
```

