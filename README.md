# Templates In OI

## 概述

总结了一些在 **信息学竞赛(Olympiad in Informatics, OI)** 中可能会用到的模板， 配置文件等。

## 目录

### 动态规划

- `/DP/knapsack-pure.cpp`, `01` 背包
- `/DP/knapsack-complete.cpp`, 完全背包
- `/DP/knapsack-multiple.cpp`, 单调队列优化多重背包
- `/DP/knapsack-grouped.cpp`, 分组背包
- `/DP/lcis.cpp`, 最长公共上升子序列
- `/DP/lcs-lis.cpp`, 用最长上升子序列实现的最长公共子序列
- `/DP/lcs-normal.cpp`, 最长公共子序列的朴素实现
- `/DP/lis-bit.cpp`, 最长上升子序列的树状数组写法
- `/DP/lis-greedy.cpp`, 基于贪心和单调栈的最长上升子序列

### 数据结构

- `/DS/chairman-tree.cpp`, 静态主席树（~~可持久化离散化桶~~）
- `/DS/disjoint-set.cpp`, 并查集
- `/DS/dynamic-sgt.cpp`, 动态开点线段树
- `/DS/linear-basis.cpp`, 线性基
- `/DS/normal-bit.cpp`, 朴素树状数组（~~芬维克树~~）
- `/DS/normal-sgt.cpp`, 朴素线段树
- `/DS/normal-splay.cpp`, 朴素 `splay` 实现普通平衡树
- `/DS/reverse-splay.cpp`, `splay` 实现文艺平衡树
- `/DS/sparse_table.cpp`, `st` 表

### 图论

- `/GT/bridge.cpp`, `Tarjan` 桥
- `/GT/cut-point.cpp`, `Tarjan` 割点
- `/GT/dijkstra.cpp`, 堆优化 `dijkstra` 实现单源最短路径
- `/GT/kruskal.cpp`, `kruskal` 最小生成树
- `/GT/prim.cpp`, `prim` 最小生成树
- `/GT/shrink-point.cpp`, `Tarjan` 缩点
- `/GT/spfa.cpp`, `spfa` 实现单源最短路径
- `/GT/tarjan-lca.cpp`, `tarjan` 离线求最近公共祖先(Lowest Common Ancestor, LCA)
- `/GT/tree-cut-lca.cpp`, 树链剖分求 `LCA`
- `/GT/tree-cut.cpp`, 树链剖分

### 数论

- `/MT/crt.cpp`, 中国剩余定理
- `/MT/euler-prime.cpp`, 欧拉筛
- `/MT/gcd-lcm.cpp`, 欧几里得定理求最大公约数/最小公倍数
- `/MT/inv-exgcd.cpp`, 扩展欧几里得定理求单个数字的乘法逆元
- `/MT/inv-fermat.cpp`, 费马小定理求单个数字的乘法逆元
- `/MT/inv-linear.cpp`, 线性求 `1 ~ n` 中每个数字的乘法逆元
- `/MT/lucas.cpp`, 卢卡斯定理
- `/MT/miller-rabin.cpp`, `miller-rabin` 快速判素
- `/MT/pollard-rho.cpp`, `pollard-rho` 快速质因数分解
- `/MT/quick-matrix-pow.cpp`, 矩阵快速幂
- `/MT/quick-pow.cpp`, 快速幂

### 字符串算法

- `/SA/ac-automaton.cpp`, `AC` 自动机实现多串匹配
- `/SA/kmp.cpp`, `KMP` 算法实现单串匹配
- `/SA/manacher.cpp`, `manacher` 求最长回文子串

### 配置

- `/CONF/.vimrc`, `vim` 编辑器的配置文件

---

<p style="text-align:center; color:grey; opacity: 0.75;font-size:35px">made with ♥ by <a href="https://github.com/Eqvpkbz" style="text-decoration:none; color:grey;">Eqvpkbz</a></p>
