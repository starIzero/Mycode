### 简要说明
1. sort文件夹用于放置排序算法
   - 冒泡排序 (Bubble Sort)
   - 选择排序 (Selection Sort) 
   - 插入排序 (Insertion Sort)
   - 快速排序 (Quick Sort)
   - 归并排序 (Merge Sort)
   - 堆排序 (Heap Sort)
2. search文件夹用于放置查找算法
   - 二分查找 (Binary Search)
   - 顺序查找 (Sequential Search)
3. tree文件夹用于放置树相关算法
   - 二叉树遍历 (Binary Tree Traversal)
   - 二叉搜索树 (Binary Search Tree)
   - 平衡二叉树 (AVL Tree)
4. graph文件夹用于放置图相关算法
   - 深度优先搜索 (DFS)
   - 广度优先搜索 (BFS)
   - 最短路径算法 (Shortest Path)
5. dp文件夹用于放置动态规划算法
   - 背包问题 (Knapsack Problem)
   - 最长公共子序列 (LCS)

### 项目结构

project/  
├── sort/ # 排序算法  
├── search/ # 查找算法  
├── tree/ # 树相关算法  
├── graph/ # 图相关算法  
└── dp/ # 动态规划算法  

### 使用说明
每个算法都包含详细的注释说明和示例代码，可以直接运行查看效果。

**声明：仅供学习参考**

# 排序算法实现

## 项目配置
- 所有编译输出文件统一存放在源文件同级的 `output` 目录下
- 支持 VSCode 调试和运行
- 调试时使用外置控制台

### 开发环境要求
- MinGW-w64 GCC
- VSCode
- C/C++ 扩展
- Code Runner 扩展

### 目录结构

## 已实现的算法
1. 插入排序
   - 直接插入排序
   - 希尔排序