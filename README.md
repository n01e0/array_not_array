# 一年限定LT用repository
## 小さな値を格納する配列を単なる数字にしてメモリを削減してみる。
無意識に
```c
int A[5] = {1, 2, 3, 4, 5};
```
とかやってるけど[メモリがもったいない](##この記事の趣旨)。

ここではint型の要素が5つある配列を定義している。

int型の変数は4byte(8x4bit)なので合計20byteをこの配列の為に確保している。値は最大でも5だから4byteもいらないのに。
### 型を変える
int型は4byteも使っていてもったいない。shortにすれば2byteで済む。
```c
short A[5] = {1, 2, 3, 4, 5};
```
さらに、char型を使うと1byteなので配列を5byteに収めることが出来る。
```c
char A[5] = {1, 2, 3, 4, 5};
```
***
## 本題
## 配列を用いずに配列を表現する
先ほど述べたようにここで扱われている数字は最大で5だ。5までの数字を表すのには3bitあれば良い。

ならば、3bitの型を用いればデータを削減できる。

**あったなら**

**ない**

**作る**

3bitのデータが5こ入るデータを作れば良い。

3x5なので15bit。ちょっとだけもったいないけどshort型なら16bitだ。

さて、この配列の仕組みは簡単だ。

数学を履修したことのある人は群数列をイメージしてもらうとわかりやすいかもしれない。

16bitの二進数のデータを3桁づつに区切り、それを配列の要素として扱う。


## この記事の趣旨
