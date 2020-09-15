# アルゴリズム一覧

## ABC

### ABC049

---

**A 題名**：ただ題名がいい

### ABC084

---

**C 全探索**：ただ単にシミュレートすればよい。

### ABC085

---

**D シミュレーション**：刀が壊れるという状況はそこまで深く考える必要はない。たった一度しか使えない攻撃力biの刀、何度も触れる攻撃力aiの刀というように分けて考えるととても簡単である。

### ABC094

---

**D　数学**：普通に考えて２つの数に対して組み合わせを計算して全探索するのは無理である。組み合わせの性質を考察する問題。

### ABC113

---

**C 二分探索**：二分探索を行うことで計算量を減らすことができる。<algorithm>にあるstd::lower_bondで簡単に実装でき、目標のイテレータを受け取ることができる。目標の出現場所を数値として扱いたい場合は、std::distanceで簡単に求めることができる。

### ABC127

---

**D_prime ランレングス圧縮の利用**：愚直にcをb個用意するのではなく、pairでまとめている。

### ABC130

---

**D 尺取り法**：ある条件を満たす区間を探すのが得意なアルゴリズム。

### ABC134

---

**D 思考**：緑diffによくある考えればO(n)ぐらいで終わるやつである。今回のポイントとしては、倍数に注目するである。iの倍数はi以上でないと出てこないのでi以上のiの倍数についてみればよくO(N/1 + N/2 + N/3 + ... + N/N)となる。これはO(NlogN)となる。計算量が理解しにくい場合は、これを連続したものと考えればよい。つまりO(N * integral{N,1} 1/x)となりO(NlogN)となる。0,1しか扱わないときはXORを使うと簡潔に書くことができる。問題文では*成り立たない場合に-1と出力せよ*とあるが、そのときがない場合もあるので注意して考察せよ。

### ABC138

---

**D DFS、累積和**：愚直にグラフを実装し、シミュレートしては計算量が増えるので駄目。あらかじめ、部分木の頂点に加算し、根から累積和をとるようにすると計算量が抑えられる。

### ABC142

---

**D 素因数分解、最大公約数**：2数の約数はそれらの最大公約数の約数を列挙すればよい。約数列挙、素因数分解は
<img src="https://latex.codecogs.com/gif.latex?O(\sqrt{n})"/>
で可能である。

### ABC147

---

**C bit全探索**：この手の真偽を調べる時にはbit全探索が有効である。また入力の大きさからもそのようなことが分かる。具体的には*誰が正しいことを言っているのか*について全探索を行う。仮定があっている場合は、その時の立っているbitの数が正直者の数であり、その最大値を探索すればよい。

**D XOR**：XORは桁上がりのない和とみることができ、各桁の演算が独立しているので桁に注目するといいことがある。今回は、各桁の0,1の個数の組み合わせ×桁、それらの和が答えである。こういう時は集合を意識するとわかりやすい。　参考：https://outline.hatenadiary.jp/entry/2019/12/17/021530

### ABC151

---

**D BFS,典型題**：典型的なBFSの問題である。BFSは距離に対する重みがないときの最短経路問題を解くことができる。今回は最長経路なので、各地点から最も遠い場所をBFSすればよい。

### ABC164

---

**D MOD,典型**：このような問題はMODの性質を上手に利用することで解くことができる。ここでTk(右からk番目までの数字からなる整数)を考える。（ex: s = 1817181712114、j = 10のときtj = 2114）である。すると区間[i,j]から得られる整数は次のように表現される。(Ti-Tj)/10^(n-|s|)である。この整数を2019で割ったときの余りが0になれば、正解である。ここで合同式の性質を利用する。任意のa,b,c,p（a,pは互いに素）において次のような関係が成り立つ。ab mod p = ac mod p 。今回はこの性質を利用する。10と2019は互いに素であるため、上で議論した(Ti-Tj)/10^(n-|s|)の余りは(Ti-Tj)の余りと等しくなる。以上の議論よりTi mod 2019 = Tj mod 2019　である組の個数が本題の答えである。実際の実装としては、すべてのTiに対する余りをとり、同じあまりである個数を数える。各余りの個数から２つ選ぶ組み合わせを計算し(Ti mod 2019 = Tj mod 2019である組と同じこと)、その和が答えである。 同じような条件が成り立つときにこの性質が使えるので割と典型題らしい。合同式の性質をうまく利用したいところである。　　参考：https://www.youtube.com/watch?v=Ra0y0EZ24ZM&t=876s
## ARC

---

### ARC066

---

**C 数学**:なんでお前らそれは覚えてんの...　数学の問題でありえないものを排除してから２^(n/2)を求めればよい

## AGC

---

**A 数学**：三角形の面積を求める時は、外積を使う。座標を固定するという考え方をし、2つの点を固定する。そこから外積の関係式を利用して3つ目の座標を計算する。数学的な考察がうまくいけば解ける問題。
## Other Contests

---

### CODE FESTIVAL 2016 qual C

---

**B 貪欲法または、数学**：前日食べたケーキの種類をのぞいたなかで、一番余っているケーキの種類を食べるという方法で解くことができる。また、Atcoderの解説にある通りに、ケーキの種類の中で一番多くある種類とそれ以外に注目すると、O(1)で解答することが可能である。

### CODE FESTIVAL 2017 qual C

---

**C 回文、全探索**：回文は先頭文字と末尾文字に注目するとよい。

### Tenka1 Programmer Beginner Contest 2019

---

**C 思考、全探索**：問題文を読むと黒の右にある白の個数を単に出力すればいいと感じるが、それでは必ず最適解にはならない。この問題を満たす配置は　.....#####といったように、左側に白、右側に白が固まるようにすればいい。この状態になる色の変え方のうち最小になるものを全探索する。今回は、白と黒の境目を見つければよく、その境目から左はすべて白、右は黒になる。すなわち、境目から左側にある黒の個数＋境目から右側にある白の個数が任意の場所を境目とした状態にするために必要な回数である。この回数の最小値が解である。

### diverta 2019 Programming Contest

---

**B 全探索**：愚直に実装すると
<img src="https://latex.codecogs.com/gif.latex?O(n^3)"/>
だが工夫すると
<img src="https://latex.codecogs.com/gif.latex?O(n^2)"/>
になる。

### 第二回全国統一プログラミング王決定戦予選

---

**B グラフ理論入門**：木になじみがあるかの問題。

### DISCO presents ディスカバリーチャンネル コードコンテスト2020 予選

---

**C 再帰関数、思考**：簡単な解き方としては、まず、横に区切ることを考える。少なくともその列に1つ以上のイチゴが含まれるように区切り、そのあとに、縦に区切るというようにすればうまく区切ることができる。実装が少し大変だが、条件を満たすように頑張れば、数学的な考察や複雑なアルゴリズムがいらないので簡単かもしれない。　再帰的な考え方を利用する場時は、常にケーキを縦か横で2等分するといったように考えれば再帰的に解くこともできる。

### 三井住友信託銀行プログラミングコンテスト2019

---

**D 全探索**：条件に沿うものについて全探索を行う。数が少ないときは有効。

### キーエンス プログラミング コンテスト 2020

---

**B 区間スケジューリング問題（貪欲法）**：有名な問題なので体験しておくとよい。終了時間が早い順（今回は、区間の終端が0に近い順）で仕事を行う（今回は、ロボットを配置）と最適解が求まる。証明は、検索するとたくさん見つかる。