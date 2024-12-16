### 简要说明
1. sort文件夹用于放置排序算法
   - 冒泡排序 (Bubble Sort)
   - 快速排序 (Quick Sort)
   - 直接插入排序 (Direct Insertion Sort)
   - 希尔排序 (Shell Sort)
   - 归并排序 (Merge Sort)
   - 基数排序 (Radix Sort)
   - 堆排序 (Heap Sort)
   - 选择排序 (Selection Sort) 
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

### 安装步骤
1. 克隆项目到本地：

```bash
   git clone https://github.com/starIzero/Mycode.git   
```

2. 进入项目目录：

```bash
   cd yourproject   
```

### 使用示例
- 运行排序算法：  
```bash
  cd sort
  g++ bubble_sort.cpp -o output/bubble_sort
  ./output/bubble_sort 
```

### 贡献指南
1. Fork 本项目
2. 创建你的特性分支 (`git checkout -b feature/AmazingFeature`)
3. 提交你的更改 (`git commit -m 'Add some AmazingFeature'`)
4. 推送到分支 (`git push origin feature/AmazingFeature`)
5. 打开一个 Pull Request

### 项目配置
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
2. 选择排序  
   - 堆排序  
   - 选择排序
3. 交换排序
   - 冒泡排序
   - 快速排序
4. 归并排序
5. 基数排序