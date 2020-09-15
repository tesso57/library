# vector について

---

- vector の大きさは .size()
- push_back()を使うことで要素数を取得できる。
- .at() はその要素がないときにエラーとなる。
- [] でアクセスする場合は、その要素を新規に作成する。
- mapのメンバ関数であるcount関数と同じ使い方ができるcount関数がある。実際の使い方としては、count(検索し始める場所のイテレータ、検索を終えるイテレータ、検索するもの)とし、戻り値に存在した個数(size_t型)が帰ってくる。参考：[https://cpprefjp.github.io/reference/algorithm/count.html](https://cpprefjp.github.io/reference/algorithm/count.html)
- 拡張for文でautoを使うときは型を意識すること 参考：[https://prettysoft.hatenablog.com/entry/20101113/1418577983](https://prettysoft.hatenablog.com/entry/20101113/1418577983)

# mapについて

---

- メンバ関数であるcount関数を使用することで検索したい物が対象のmapのキーに存在するかを検索できる。参考:[https://cpprefjp.github.io/reference/algorithm/count.html](https://cpprefjp.github.io/reference/algorithm/count.html)
- 新しく何かを追加する場合はinser関数を使う。insert関数の引数はpairオブジェクト、またはイテレータである。
  - mapのinsert関数は他のmapのイテレータを受け取ることで複製することができる　参考:[https://cpprefjp.github.io/reference/map/map/insert.html](https://cpprefjp.github.io/reference/map/map/insert.html)

# string について

---

- Stringではなくstring
- 要素数を取得するときは.length() or .size()を使う
- .size(), .length() の戻り値は size_t型
- sort関数、reverse関数を使うことができる
- .erase()で引数にイテレータを指定することで消すことができる
- .insert()で文字列に挿入することができる　参考:[https://cpprefjp.github.io/reference/string/basic_string/insert.html](https://cpprefjp.github.io/reference/string/basic_string/insert.html)
- isupper()を使うことでその文字が大文字か、小文字かを判別できる。

# イテレータについて

---

- イテレータとは配列の場所を表すものである
- .begin()でそのものの最初の番地を表し、そこに+1するとその隣である。
- sort関数やcount関数を使用する際、同じ場所を指定することは出来ない ex: sort(hoge.begin(),hoge.begin())
  
# 文字列出力について

---

- cout << << endl よりも puts()のほうが楽
- 数字、空白と出力する場合は改行前に空白があるとWAになる場合があるので注意(ex:ARC015)。以下のようにするとよい。

```cpp
printf("%d %d %d %d %d %d\n",ans.at(0),ans.at(1),ans.at(2),ans.at(3),ans.at(4),ans.at(5));
```


# 連続した数字の入力を分ける場合

---

- 問題によってABCDと、変数が与えれているが、それぞれの間に空白がない場合は一つの数字として読み取ってしまう。それを防ぐために以下のようなやり方がある
- やり方１

```cpp
scanf ("% s " ,& s );
int a = s [0] - ’0 ’ , b = s [1] - ’0 ’ , c = s [2] - ’0 ’ , d = s [3] - ’0 ’;
```

- やり方２

```cpp
ll A, B, C, D;
string input;
cin >> input;
A = (int)input.at(0) - 48;
B = (int)input.at(1) - 48;
C = (int)input.at(2) - 48;
D = (int)input.at(3) - 48;
```

# long long について

---

- long の場合、環境によって安定しないのでlong longにする必要がある。

# for 文について

---

- sqrt(N) 回試行する場合、sqrt()関数を使うよりもi*i < Nとしたほうが計算量が少ない。(わざわざdoubleの精度で平方根を求めているため)
- 約数をみる場合はsqrt(N)まで試せばよい。
- ちょっと特殊なfor文、c++では0はfalse、それ以外はtrueとなるので以下のように記述することもできる

```cpp
#include <bits/stdc++.h>
int main()
{
    ll N;
    cin >> N;
    for(ll S = N;--S;){
        cout << S << endl;
    }
    return 0;
}
```


# MODについて

---

- 競プロでは 1e9 + 7 で割った余りを出力する場合が多い。中にはただ MOD をとるだけでは overflow してしまうので注意
- 参考 [https://mathtrain.jp/mod](https://mathtrain.jp/mod)
- A:=割られる数、B:=割る数とする。それぞれA,Bが互いに素であるときは、そのAの倍数をBで割った余りの和ですべての整数を表すことができる。
- つまり、A,Bが互いに素 ならば A mod B = C <-> A\*k mod B\*k = C\*(K:＝整数)

# 型について

---

- 9はint型として評価されるが、9.はfloat型である。数値計算などの桁落ちで躓くので注意
- できるだけ整数型のみの計算を行い、浮動小数点型を使わない。※特にlong long 型の範囲で行うような計算　参考：[https://komiyam.hatenadiary.org/entry/20110627/1309100463](https://komiyam.hatenadiary.org/entry/20110627/1309100463) 、[https://ja.wikipedia.org/wiki/%E8%A8%88%E7%AE%97%E6%A9%9F%E3%82%A4%E3%83%97%E3%82%B7%E3%83%AD%E3%83%B3](https://ja.wikipedia.org/wiki/%E8%A8%88%E7%AE%97%E6%A9%9F%E3%82%A4%E3%83%97%E3%82%B7%E3%83%AD%E3%83%B3)
- long long型と0を比較するときは0LLとし、型を合わせたほうが良い

# 演算子の優先順位について

---

- 演算子の優先順位が決まっているため注意が必要　※特に三項演算子を出力に使うとき　参考：[https://ja.cppreference.com/w/cpp/language/operator_precedence](https://ja.cppreference.com/w/cpp/language/operator_precedence)

# bit全探索について

---

- N個の物から、いくつか選び出すというのを全列挙する方法　※計算量がO($N2^N$)かかるので注意
- bit全探索を使うときは条件をYes,Noと簡単にしよう
- 実装例 : ex(../ARC/ARC061/A.cpp)

```cpp
repb(bit, N, 0)
    {
        repi(i, N, 0)
        {
            if (bit & (1 << i))
            {
              //処理
            }
        }
    }
```

- 参考:[https://drken1215.hatenablog.com/entry/2019/12/14/171657](https://drken1215.hatenablog.com/entry/2019/12/14/171657) 

# 計算量について

---

- 競技プログラミングでは時間内で与えられた問題を解かなければならない。そして、ただ愚直に実装しても計算量が膨大となり解くことができない。そこで計算量について考慮する必要が出てくる。大まかにみて、10^8回の計算でなくてはいけない
- 参考 [https://atcoder.jp/contests/apg4b/tasks/APG4b_w](https://atcoder.jp/contests/apg4b/tasks/APG4b_w)

# dpについて

---

- 升目のときは各方向に対した配列を用意しておくと移動しやすい

# 数学用語

---

- 単調非減少とは、広義な単調増加である。  
  - 参考(関数の場合)https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q10159537190

- リュカ数とは、フィボナッチ数列のように自然界に多く存在する数である。
  - 参考:[https://ja.wikipedia.org/wiki/%E3%83%AA%E3%83%A5%E3%82%AB%E6%95%B0](https://ja.wikipedia.org/wiki/%E3%83%AA%E3%83%A5%E3%82%AB%E6%95%B0)

- グリッドグラフとは、座標平面のようなものである。そのようなグラフを全域着と呼ぶ。[https://ja.wikipedia.org/wiki/%E5%85%A8%E5%9F%9F%E6%9C%A8](https://ja.wikipedia.org/wiki/%E5%85%A8%E5%9F%9F%E6%9C%A8)

- ミンコフスキー距離とはマンハッタン距離、ユークリッド距離などを一般化したものである。定義を以下に示す。ちなみに、$P=1$のときはマンハッタン距離、$P=2$のときは、ユークリッド距離、$P=inf$のときは、チェビシェフ距離という。
$$
D_{xy} = (\sum_{i=1}^n|x_i-y_i|^P)^\frac{1}{P}
$$

# テクニック集

---

- 結構ためになる小技集、コードをより簡潔に記述できる。[今すぐ使える C++ コーディングテクニック集](https://torus711.hatenablog.com/entry/20131205/p1)