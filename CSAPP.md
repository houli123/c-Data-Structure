# 重点内容

对于《深入理解计算机系统》（CSAPP）这本书，它被广泛认为是计算机科学领域的经典之作。因此，**如果时间和精力允许，通读全书无疑是最佳选择**。这本书的每一章都为你理解计算机系统搭建了坚实的基础，并且章节之间层层递进，相互关联。

然而，如果你希望在有限的时间内抓住核心，或者想在通读的过程中有所侧重，那么以下是一些通常被认为是**必读或非常重要**的内容。我会尽量精确到三级标题，但请注意，不同版本和翻译的CSAPP在标题细节上可能略有差异。这里的推荐是基于CSAPP第三版（英文版）的常见结构，中文版通常会做对应翻译。

**推荐的学习模式：**

建议你**先快速通读一遍**，对全书内容有一个整体的印象。然后，**针对以下列出的重点章节和主题进行精读和深入理解**，包括完成相关的练习题（Labs）。其他章节可以作为辅助阅读或在需要时查阅。这种模式既能保证你掌握核心知识，又能对整个计算机系统有全面的认识。

**必读/重点内容（精确到三级标题）：**

以下内容是CSAPP中的核心，对于理解计算机系统的工作原理至关重要：

**第一部分：程序结构和执行 (Program Structure and Execution)**

- **第1章：计算机系统漫游 (A Tour of Computer Systems)**
  - 1.1 信息就是位 + 上下文 (Information is Bits + Context)
  - 1.2 程序被其他程序翻译成不同格式 (Programs Are Translated by Other Programs into Different Forms)
  - 1.3 了解编译系统如何工作是大有益处的 (It Pays to Understand How Compilation Systems Work)
  - 1.4 处理器读并解释存储在存储器中的指令 (Processors Read and Interpret Instructions Stored in Memory)
    - 1.4.1 系统的硬件组成 (Hardware Organization of a System)
    - 1.4.2 运行 Hello 程序 (Running the hello Program)
  - 1.5 高速缓存至关重要 (Caches Matter)
  - 1.6 存储设备形成层次结构 (Storage Devices Form a Hierarchy)
  - 1.7 操作系统管理硬件 (The Operating System Manages the Hardware)
    - 1.7.1 进程 (Processes)
    - 1.7.2 线程 (Threads)
    - 1.7.3 虚拟内存 (Virtual Memory)
    - 1.7.4 文件 (Files)
  - 1.9 并发和并行 (Concurrency and Parallelism)
    - 1.9.1 线程级并发 (Thread-Level Concurrency)
    - 1.9.2 指令级并行 (Instruction-Level Parallelism)
    - 1.9.3 单指令、多数据并行 (Single-Instruction, Multiple-Data (SIMD) Parallelism)
  - 1.10 计算机系统中抽象的重要性 (The Importance of Abstractions in Computer Systems)
- **第2章：信息的表示和处理 (Representing and Manipulating Information)**
  - 2.1 信息存储 (Information Storage)
    - 2.1.1 十六进制表示法 (Hexadecimal Notation)
    - 2.1.2 字 (Words)
    - 2.1.3 数据大小 (Data Sizes)
    - 2.1.4 寻址和字节顺序 (Addressing and Byte Ordering) (重点理解大端和小端)
    - 2.1.7 C语言中的位级运算 (Bit-Level Operations in C)
    - 2.1.8 C语言中的逻辑运算 (Logical Operations in C)
    - 2.1.9 C语言中的移位运算 (Shift Operations in C)
  - 2.2 整数表示 (Integer Representations)
    - 2.2.1 整型数据类型 (Integral Data Types)
    - 2.2.2 无符号编码 (Unsigned Encodings)
    - 2.2.3 补码编码 (Two’s-Complement Encodings)
    - 2.2.4 有符号数和无符号数之间的转换 (Conversions Between Signed and Unsigned)
    - 2.2.5 C语言中的有符号数与无符号数 (Signed vs. Unsigned in C)
    - 2.2.6 扩展一个数字的位表示 (Expanding the Bit Representation of a Number)
    - 2.2.7 截断数字 (Truncating Numbers)
    - 2.2.8 关于有符号数和无符号数的建议 (Advice on Signed vs. Unsigned)
  - 2.3 整数运算 (Integer Arithmetic)
    - 2.3.1 无符号加法 (Unsigned Addition)
    - 2.3.2 补码加法 (Two’s-Complement Addition)
    - 2.3.3 补码的非 (Two’s-Complement Negation)
    - 2.3.4 无符号乘法 (Unsigned Multiplication)
    - 2.3.5 补码乘法 (Two’s-Complement Multiplication)
    - 2.3.6 乘以常数 (Multiplying by Constants)
    - 2.3.7 除以2的幂 (Dividing by Powers of 2)
    - 2.3.8 关于整数运算的最后思考 (Final Thoughts on Integer Arithmetic)
  - 2.4 浮点数 (Floating Point)
    - 2.4.1 二进制小数 (Fractional Binary Numbers)
    - 2.4.2 IEEE浮点表示 (IEEE Floating-Point Representation)
    - 2.4.3 数字示例 (Example Numbers)
    - 2.4.4舍入 (Rounding)
    - 2.4.5 浮点运算 (Floating-Point Operations)
    - 2.4.6 C语言中的浮点数 (Floating Point in C)
- **第3章：程序的机器级表示 (Machine-Level Representation of Programs)** (这一章极为重要)
  - 3.1 历史观点 (A Historical Perspective)
  - 3.2 程序编码 (Program Encodings)
    - 3.2.1 机器级代码 (Machine-Level Code)
    - 3.2.2 代码示例 (Code Examples)
    - 3.2.3 关于格式的注解 (Notes on Formatting)
  - 3.3 数据格式 (Data Formats)
  - 3.4 访问信息 (Accessing Information)
    - 3.4.1 操作数指示符 (Operand Specifiers)
    - 3.4.2 数据传送指令 (Data Movement Instructions) (MOV类指令)
    - 3.4.3 数据传送示例 (Data Movement Examples)
    - 3.4.4 压入和弹出栈数据 (Pushing and Popping Stack Data)
  - 3.5 算术和逻辑操作 (Arithmetic and Logical Operations)
    - 3.5.1 加载有效地址 (Load Effective Address) (leaq指令)
    - 3.5.2 一元和二元操作 (Unary and Binary Operations)
    - 3.5.3 移位操作 (Shift Operations)
    - 3.5.4 特殊的算术操作 (Special Arithmetic Operations)
  - 3.6 控制 (Control) (理解汇编如何实现if/else, switch, loop)
    - 3.6.1 条件码 (Condition Codes)
    - 3.6.2 访问条件码 (Accessing the Condition Codes)
    - 3.6.3 跳转指令及其编码 (Jump Instructions and their Encodings)
    - 3.6.4 跳转指令的实现 (Implementing Conditional Branches with Jumps)
    - 3.6.5 循环 (Loops) (do-while, while, for)
    - 3.6.6 条件传送指令 (Conditional Move Instructions)
    - 3.6.7 Switch语句 (Switch Statements)
  - 3.7 过程 (Procedures) (函数调用栈帧结构是核心)
    - 3.7.1 栈帧结构 (Stack Frame Structure)
    - 3.7.2 转移控制 (Transferring Control) (call, ret)
    - 3.7.3 寄存器使用惯例 (Register Usage Conventions)
    - 3.7.4 过程示例 (Procedure Example)
    - 3.7.5 递归过程 (Recursive Procedures)
  - 3.8 数组分配和访问 (Array Allocation and Access)
    - 3.8.1 基本原则 (Basic Principles)
    - 3.8.2 指针运算 (Pointer Arithmetic)
    - 3.8.3 嵌套的数组 (Nested Arrays)
    - 3.8.4 定长数组 (Fixed-Size Arrays)
    - 3.8.5 变长数组 (Variable-Size Arrays)
  - 3.9 异构数据结构 (Heterogeneous Data Structures) (结构体和联合体)
    - 3.9.1 结构 (Structures)
    - 3.9.2 联合 (Unions)
    - 3.9.3 数据对齐 (Data Alignment)
  - 3.10 将控制流与数据流结合起来以避免过程调用开销 (Combining Control with Data Flow to Avoid Procedure Call Overhead) (如循环展开)
  - 3.11 浮点代码 (Floating-Point Code) (了解即可，优先级稍低)
  - 3.12 x86-64中的IA32兼容性 (IA32 Compatibility in x86-64) (了解即可)

**第二部分：在系统中运行代码 (Running Code on a System)**

- **第5章：优化程序性能 (Optimizing Program Performance)**
  - 5.1 优化编译器的能力和局限性 (Capabilities and Limitations of Optimizing Compilers)
  - 5.2 程序性能的表示 (Expressing Program Performance)
  - 5.3 程序示例 (Program Example)
  - 5.4 消除循环的低效率 (Eliminating Loop Inefficiencies) (代码移动)
  - 5.5 减少过程调用 (Reducing Procedure Calls)
  - 5.6 消除不必要的存储器引用 (Eliminating Unneeded Memory References) (使用临时变量)
  - 5.7 理解现代处理器 (Understanding Modern Processors) (重点理解流水线和超标量)
    - 5.7.1 整体操作 (Overall Operation)
    - 5.7.2 功能单元的性能 (Functional Unit Performance)
    - 5.7.3 处理器操作的抽象模型 (An Abstract Model of Processor Operation)
  - 5.8 循环展开 (Loop Unrolling)
  - 5.9 增强并行性 (Enhancing Parallelism)
    - 5.9.1 多重累积 (Multiple Accumulators)
    - 5.9.2 重新结合变换 (Reassociation Transformation)
  - 5.11 理解存储器性能 (Understanding Memory Performance)
    - 5.11.1 加载的延迟 (Load Latency)
    - 5.11.2 存储操作的延迟 (Store Latency)
  - 5.13 应用：性能改进技术 (Applying: Performance Improvement Techniques)
  - 5.14 确认和消除性能瓶颈 (Identifying and Eliminating Performance Bottlenecks) (Amdahl定律)
    - 5.14.1 程序剖析 (Program Profiling)
    - 5.14.2 使用剖析程序来指导优化 (Using a Profiler to Guide Optimization)
    - 5.14.3 Amdahl定律 (Amdahl’s Law)
- **第6章：存储器层次结构 (The Memory Hierarchy)** (这一章极为重要)
  - 6.1 存储技术 (Storage Technologies)
    - 6.1.1 随机访问存储器 (Random-Access Memory) (SRAM, DRAM)
    - 6.1.2 磁盘存储 (Disk Storage)
    - 6.1.3 固态硬盘 (Solid-State Disks)
    - 6.1.4 存储技术趋势 (Storage Technology Trends)
  - 6.2 局部性 (Locality) (时间局部性和空间局部性是核心概念)
    - 6.2.1 对程序数据引用的局部性 (Locality of References to Program Data)
    - 6.2.2 取指令的局部性 (Locality of Instruction Fetches)
    - 6.2.3 局部性小结 (Summary of Locality)
  - 6.3 存储器层次结构 (The Memory Hierarchy)
    - 6.3.1 存储器层次结构的中心思想 (Central Idea of a Memory Hierarchy)
    - 6.3.2 存储器层次结构概念小结 (Summary of Memory Hierarchy Concepts)
  - 6.4 高速缓存存储器 (Cache Memories) (核心中的核心)
    - 6.4.1 通用高速缓存组织结构 (Generic Cache Memory Organization)
    - 6.4.2 直接映射高速缓存 (Direct-Mapped Caches)
    - 6.4.3 组相联高速缓存 (Set Associative Caches)
    - 6.4.4 全相联高速缓存 (Fully Associative Caches)
    - 6.4.5 有关写的问题 (Issues with Writes) (写直通，写回)
    - 6.4.6 真实的高速缓存层次结构剖析 (Anatomy of a Real Cache Hierarchy)
    - 6.4.7 高速缓存参数的性能影响 (Performance Impact of Cache Parameters)
  - 6.5 编写高速缓存友好的代码 (Writing Cache-friendly Code)
  - 6.6 综合：高速缓存对程序性能的影响 (Putting It Together: The Impact of Caches on Program Performance)
    - 6.6.1 存储器山 (The Memory Mountain)
    - 6.6.2 重新排列循环以提高空间局部性 (Rearranging Loops to Increase Spatial Locality)
    - 6.6.3 在程序中利用局部性 (Exploiting Locality in Your Programs)

**第三部分：程序间的交互和通信 (Interaction and Communication Between Programs)**

- **第7章：链接 (Linking)** (理解链接过程对理解大型项目和解决链接错误至关重要)
  - 7.1 编译器驱动程序 (Compiler Drivers)
  - 7.2 静态链接 (Static Linking)
  - 7.3 目标文件 (Object Files)
  - 7.4 可重定位目标文件 (Relocatable Object Files)
  - 7.5 符号和符号表 (Symbols and Symbol Tables)
  - 7.6 符号解析 (Symbol Resolution) (理解符号如何被解析是重点)
    - 7.6.1 链接器如何解析多重定义的全局符号 (How Linkers Resolve Multiply Defined Global Symbols)
    - 7.6.2 与静态库链接 (Linking with Static Libraries)
    - 7.6.3 链接器如何使用静态库来解析引用 (How Linkers Use Static Libraries to Resolve References)
  - 7.7 重定位 (Relocation)
    - 7.7.1 重定位条目 (Relocation Entries)
    - 7.7.2 重定位符号引用 (Relocating Symbol References)
  - 7.8 可执行目标文件 (Executable Object Files)
  - 7.9 加载可执行目标文件 (Loading Executable Object Files)
  - 7.10 动态链接共享库 (Dynamic Linking with Shared Libraries)
  - 7.11 从应用程序中加载和链接共享库 (Loading and Linking Shared Libraries from Applications)
  - 7.12 位置无关代码 (Position-Independent Code (PIC))
  - 7.13 处理目标文件的工具 (Tools for Manipulating Object Files)
- **第8章：异常控制流 (Exceptional Control Flow)** (理解ECF是理解操作系统和高级程序行为的基础)
  - 8.1 异常 (Exceptions)
    - 8.1.1 异常处理 (Exception Handling)
    - 8.1.2 异常的类别 (Classes of Exceptions) (中断、陷阱、故障、终止)
    - 8.1.3 Linux/x86-64系统中的异常 (Exceptions in Linux/x86-64 Systems)
  - 8.2 进程 (Processes)
    - 8.2.1 逻辑控制流 (Logical Control Flow)
    - 8.2.2 并发流 (Concurrent Flows)
    - 8.2.3 用户模式和内核模式 (User Mode and Kernel Mode)
    - 8.2.4 上下文切换 (Context Switches)
  - 8.3 系统调用错误处理 (System Call Error Handling)
  - 8.4 进程控制 (Process Control)
    - 8.4.1 获取进程ID (Obtaining Process IDs)
    - 8.4.2 创建和终止进程 (Creating and Terminating Processes) (fork, exit, wait, waitpid)
    - 8.4.3 回收子进程 (Reaping Child Processes)
    - 8.4.4 让进程休眠 (Putting Processes to Sleep) (sleep, pause)
    - 8.4.5 加载并运行程序 (Loading and Running Programs) (execve)
    - 8.4.6 利用fork和execve运行程序 (Using fork and execve to Run Programs)
  - 8.5 信号 (Signals)
    - 8.5.1 信号术语 (Signal Terminology)
    - 8.5.2 发送信号 (Sending Signals) (kill, alarm)
    - 8.5.3 接收信号 (Receiving Signals) (signal函数)
    - 8.5.4 信号处理问题 (Signal Handling Issues) (避免竞争条件)
    - 8.5.5 可移植的信号处理 (Portable Signal Handling)
  - 8.6 非本地跳转 (Nonlocal Jumps) (setjmp, longjmp，了解即可)
  - 8.7 操作进程的工具 (Tools for Manipulating Processes)
- **第9章：虚拟内存 (Virtual Memory)** (这一章极为重要)
  - 9.1 物理和虚拟寻址 (Physical and Virtual Addressing)
  - 9.2 地址空间 (Address Spaces)
  - 9.3 虚拟内存作为缓存的工具 (VM as a Tool for Caching) (理解VM如何使用DRAM作为SRAM的缓存)
    - 9.3.1 为什么使用虚拟内存？ (Why Virtual Memory?)
    - 9.3.2 DRAM缓存的组织结构 (Organization of a DRAM Cache)
    - 9.3.3 页表 (Page Tables)
    - 9.3.4 页命中 (Page Hits)
    - 9.3.5 缺页 (Page Faults)
    - 9.3.6 分配页面 (Allocating Pages)
    - 9.3.7 又是局部性 (Locality to the Rescue Again)
  - 9.4 虚拟内存作为内存管理的工具 (VM as a Tool for Memory Management) (每个进程独立的地址空间)
    - 9.4.1 简化链接 (Simplifying Linking)
    - 9.4.2 简化共享 (Simplifying Sharing)
    - 9.4.3 简化内存分配 (Simplifying Memory Allocation)
    - 9.4.4 简化加载 (Simplifying Loading)
  - 9.5 虚拟内存作为内存保护的工具 (VM as a Tool for Memory Protection)
  - 9.6 地址翻译 (Address Translation) (核心机制，理解MMU和页表如何工作)
    - 9.6.1 地址翻译概览 (Overview of Address Translation)
    - 9.6.2 集成高速缓存和虚拟内存 (Integrating Caches and VM)
    - 9.6.3 利用TLB加速地址翻译 (Speeding up Address Translation with a TLB)
    - 9.6.4 多级页表 (Multi-Level Page Tables)
    - 9.6.5 端到端的地址翻译：一个案例研究 (End-to-end Address Translation: A Case Study)
  - 9.7 案例研究：Intel Core i7内存系统 (Case Study: The Intel Core i7 Memory System)
    - 9.7.1 Core i7地址翻译 (Core i7 Address Translation)
    - 9.7.2 Core i7页表条目 (Core i7 Page Table Entries)
    - 9.7.3 Core i7 TLB 操作 (Core i7 TLB Operation)
    - 9.7.4 Core i7 缓存操作 (Core i7 Cache Operation)
  - 9.8 Linux虚拟内存系统 (Linux Virtual Memory System)
    - 9.8.1 Linux虚拟内存区域 (Linux Virtual Memory Areas)
    - 9.8.2 Linux缺页异常处理 (Linux Page Fault Handling)
  - 9.9 内存映射 (Memory Mapping) (mmap函数是重点)
    - 9.9.1 再谈共享对象 (Shared Objects Revisited)
    - 9.9.2 fork函数如何工作 (How the fork Function Works)
    - 9.9.3 execve函数如何工作 (How the execve Function Works)
    - 9.9.4 使用mmap函数的用户级内存映射 (User-Level Memory Mapping with the mmap Function)
  - 9.10 动态内存分配 (Dynamic Memory Allocation) (理解malloc和free的内部机制)
    - 9.10.1 malloc和free函数 (The malloc and free Functions)
    - 9.10.2 为什么要使用动态内存分配 (Why Dynamic Memory Allocation?)
    - 9.10.3 分配器的需求和目标 (Allocator Requirements and Goals)
    - 9.10.4 碎片 (Fragmentation) (内部碎片和外部碎片)
    - 9.10.5 实现问题 (Implementation Issues)
    - 9.10.6 隐式空闲链表 (Implicit Free Lists)
    - 9.10.7 放置已分配的块 (Placing Allocated Blocks)
    - 9.10.8 分割空闲块 (Splitting Free Blocks)
    - 9.10.9 获取额外的堆内存 (Getting Additional Heap Memory)
    - 9.10.10 合并空闲块 (Coalescing Free Blocks)
    - 9.10.11 带边界标记的合并 (Coalescing with Boundary Tags)
    - 9.10.13 显式空闲链表 (Explicit Free Lists)
    - 9.10.14 分离的空闲链表 (Segregated Free Lists)
  - 9.11 C程序中常见的与内存有关的错误 (Common Memory-Related Bugs in C Programs)
    - 9.11.1 解引用坏指针 (Dereferencing Bad Pointers)
    - 9.11.2 读未初始化的内存 (Reading Uninitialized Memory)
    - 9.11.3 允许栈缓冲区溢出 (Allowing Stack Buffer Overflows)
    - 9.11.4 假设指针和它们指向的对象是相同大小的 (Assuming that Pointers and the Objects They Point to Are the Same Size)
    - 9.11.5 造成错位错误 (Making Off-by-One Errors)
    - 9.11.6 引用指针，而不是它所指向的对象 (Referencing a Pointer Instead of the Object It Points To)
    - 9.11.7 误解指针运算 (Misunderstanding Pointer Arithmetic)
    - 9.11.8 引用不存在的变量 (Referencing Nonexistent Variables)
    - 9.11.9 引用空闲堆块中的数据 (Referencing Data in Free Heap Blocks)
    - 9.11.10 引起内存泄漏 (Introducing Memory Leaks)

**第四部分：并发编程 (Concurrent Programming)**

- 第12章：并发编程 (Concurrent Programming)

  (对现代多核编程非常重要)

  - 12.1 基于进程的并发编程 (Process-Based Concurrent Programming)
  - 12.2 基于I/O多路复用的并发编程 (Event-Based Concurrent Programming) (select, epoll)
    - 12.2.1 基本思想 (Basic Idea)
    - 12.2.2 I/O多路复用 (I/O Multiplexing)
    - 12.2.3 基于I/O多路复用的并发事件驱动服务器 (A Concurrent Event-Driven Server Based on I/O Multiplexing)
    - 12.2.5 优缺点 (Pros and Cons)
  - 12.3 基于线程的并发编程 (Thread-Based Concurrent Programming)
    - 12.3.1 线程执行模型 (Thread Execution Model)
    - 12.3.2 Posix线程 (Posix Threads)
    - 12.3.3 创建线程 (Creating Threads)
    - 12.3.4 终止线程 (Terminating Threads)
    - 12.3.5 回收已终止线程的资源 (Reaping Terminated Threads)
    - 12.3.6 分离线程 (Detaching Threads)
    - 12.3.7 初始化线程 (Initializing Threads)
    - 12.3.8 基于线程的并发服务器 (A Thread-Based Concurrent Server)
  - 12.4 多线程程序中的共享变量 (Shared Variables in Multithreaded Programs)
    - 12.4.1 线程内存模型 (Threads Memory Model)
    - 12.4.2 将变量映射到内存 (Mapping Variables to Memory)
    - 12.4.3 共享变量 (Shared Variables)
  - 12.5 用信号量同步线程 (Synchronizing Threads with Semaphores) (理解信号量PV操作)
    - 12.5.1 进度图 (Progress Graphs)
    - 12.5.2 信号量 (Semaphores)
    - 12.5.3 使用信号量来实现互斥 (Using Semaphores for Mutual Exclusion)
    - 12.5.4 利用信号量来调度共享资源 (Using Semaphores to Schedule Shared Resources) (生产者-消费者问题，读者-写者问题)
    - 12.5.5 基于预线程化的并发服务器 (A Prethreaded Concurrent Server)
  - 12.6 使用线程提高并行性 (Using Threads for Parallelism)
  - 12.7 其他并发问题 (Other Concurrency Issues) (线程安全，可重入性，死锁)
    - 12.7.1 线程安全 (Thread Safety)
    - 12.7.2 可重入性 (Reentrancy)
    - 12.7.3 在线程化的程序中使用已存在的库函数 (Using Existing Library Functions in Threaded Programs)
    - 12.7.4 竞争 (Races)
    - 12.7.5 死锁 (Deadlocks)

**其他章节的重要性：**

- **第4章：处理器体系结构 (Processor Architecture)**：如果你对计算机组成原理有浓厚兴趣，或者想深入理解CPU如何执行指令，这一章值得细读。但对于大多数应用层开发者，了解第3章的机器级表示可能已经足够。

- 第10章：系统级I/O (System-Level I/O)

  ：对于网络编程和系统编程非常重要，特别是文件I/O和Unix I/O的部分。

  - 10.1 Unix I/O (Unix I/O)
  - 10.2 打开和关闭文件 (Opening and Closing Files) (open, close)
  - 10.3 读和写文件 (Reading and Writing Files) (read, write)
  - 10.4 用RIO包健壮地读写 (Robust Reading and Writing with the RIO Package)
  - 10.5 读取文件元数据 (Reading File Metadata)
  - 10.6 共享文件 (Sharing Files)
  - 10.7 I/O重定向 (I/O Redirection)
  - 10.8 标准I/O (Standard I/O)
  - 10.9 综合：我应该使用哪些I/O函数？ (Putting It Together: Which I/O Functions Should I Use?)

- 第11章：网络编程 (Network Programming)

  ：如果你要进行网络相关的开发，这一章是必读的。

  - 11.1 客户端-服务器编程模型 (The Client-Server Programming Model)
  - 11.2 网络 (Networks)
  - 11.3 全球IP因特网 (The Global IP Internet)
    - 11.3.1 IP地址 (IP Addresses)
    - 11.3.2 因特网域名 (Internet Domain Names)
    - 11.3.3 因特网连接 (Internet Connections)
  - 11.4 Sockets接口 (The Sockets Interface) (socket, connect, bind, listen, accept是核心)
    - 11.4.1 socket地址结构 (Socket Address Structures)
    - 11.4.2 socket函数 (The socket Function)
    - 11.4.3 connect函数 (The connect Function)
    - 11.4.4 bind函数 (The bind Function)
    - 11.4.5 listen函数 (The listen Function)
    - 11.4.6 accept函数 (The accept Function)
    - 11.4.7 主机和服务的转换 (Host and Service Conversion)
    - 11.4.8 套接字接口的辅助函数 (Helper Functions for the Sockets Interface)
    - 11.4.9 示例：Echo客户端和服务器 (Example Echo Client and Server)
  - 11.5 Web服务器 (Web Servers)
    - 11.5.1 Web基础 (Web Basics)
    - 11.5.2 Web内容 (Web Content)
    - 11.5.3 HTTP事务 (HTTP Transactions)
    - 11.5.4 服务动态内容 (Serving Dynamic Content)

**总结一下：**

1. 绝对核心，必须精读并做实验：
   - 第2章 (信息表示)
   - 第3章 (机器级表示)
   - 第5章 (程序性能优化基础)
   - 第6章 (存储器层次结构)
   - 第8章 (异常控制流)
   - 第9章 (虚拟内存)
2. 非常重要，强烈建议精读：
   - 第1章 (系统漫游，建立整体概念)
   - 第7章 (链接)
   - 第12章 (并发编程)
3. 根据你的方向和兴趣选择性精读或作为后续学习：
   - 第4章 (处理器体系结构)
   - 第10章 (系统级I/O)
   - 第11章 (网络编程)

请记住，即使是“不太重要”的章节，也包含了有价值的信息。CSAPP的魅力在于它的全面性和深度。祝你学习愉快！

# 计算机系统漫游

## 程序的编译过程

就全面的讲，从编译再到运行的整个编译系统可以概括为：

![image-20250422094540628](assets/image-20250422094540628.png)

1. 预处理器用来**处理#开头的注释或者头文件**
2. 编译器用来翻译成文本文件，是一个**汇编语言**程序（用符号和助记符）来表示原本的文本文件，主要是做一些基本的语法分析，如**定义的类型有无错误**
3. 汇编器：将汇编语言文件翻译成**机器语言**指令，生成**二进制的.o文件。包括一些地址分配**
4. 链接器：将hello程序中调用的一些库函数，如printf，找到其printf.o的位置，使某种方式合并*链接）到我们源程序中

## shell

就是linux系统终端中的命令行：它一直在等待我们的输入，我们的命令。输入一个单词，先判断是不是shell内置命令，不是的话，就认为是一个可执行文件名

## 系统硬件组成

![image-20250422095324579](assets/image-20250422095324579.png)

1. 总线Bus
   贯穿整个系统的是一组电子管道，称作总线，它携带信息字节并负责在各个部件间传递。通常总线被设计成传送定长的字节块，也就是字 (word) 。  就目前的计算机基本都是8个字节64位为一个字作为基本单位的

   - **数据总线（Data Bus）**：用于传输数据。
   - **地址总线（Address Bus）**：用于传输内存地址或设备地址。
   - **控制总线（Control Bus）**：用于传输控制信号，如读写信号、中断信号等。
   - **系统总线（System Bus）**：连接CPU、内存和I/O设备的总线，是**计算机内部的主要通信通道。**

2. 1/0 设备
   I/0( 输入／输出）设备是系统与外部世界的联系通道。  每个 I/0 设备都通过一个控制器或适配器与 I/0 总线（总线的一种）相连。控制器和适配器之间的区别主要在于它们的封装方式。**控制器是 1/0 设备本身或者系统的主印制电路板（通常称作主板）上的芯片组**。而**适配器则是一块插在主板插槽上的卡**。无论如何，它们的功能都是在 1/0 总线和 1/0 设备之间传递信息。  

   - **PCI总线（Peripheral Component Interconnect）**：用于连接高速外设，如显卡、声卡等。
   - **USB总线（Universal Serial Bus）**：用于连接各种低速和中速外设，如键盘、鼠标、U盘等。
   - **SATA总线（Serial ATA）**：用于连接硬盘等存储设备。
   - **SPI总线（Serial Peripheral Interface）**：用于连接低速的串行外设，如传感器、存储芯片等。

3. 主存 

   就像计算机的一个临时的草稿纸，这张草稿纸是由动态随机存取存储器（DRAM）芯片组成的，也就是说DRAM是主存的子集。这张草稿纸上的每一个位置当然对应着其唯一的数组。主存的特性是断电后数据丢失，正如是一个ipad上的草稿纸一样，没电且没保存到硬盘中，草稿纸就没了

4. CPU

   之所以说是64位的CPU是因为**处理器的核心是大小一个字（64位）的存储设备（寄存器），也叫做程序计数器（PC)**。程序计数器充当类似指针的作用，指向主存中的某个指令的地址。CPU不断的根据程序计数器指向的指令来执行相应的指令，并使PC指向下一个指令（不一定相邻按顺序）

   一些常见的指令操作会涉及到主存、寄存器文件、**算术/逻辑单元（ALU）**。寄存器文件就是寄存器的集合，其中寄存器名字是唯一的。例如算术运算：两个寄存器充当算数，ALU充当算术运算符，得到的结果作为一个新的寄存器覆盖原来寄存器的内容。

## 程序在硬件中的工作流程

第一步：通过键盘这个输入设备输入文件名经过IO总线（未回车），文件名会通过系统总线读入寄存器中，之后通过内存总线存到内存中

![image-20250422112404288](assets/image-20250422112404288.png)

第二步：回车后，通过IO总线，将磁盘中的数据复制到主存（通过直接存储器存取DMA，不经过处理器，处理器只是发送根据指令执行命令的）

![image-20250422112705995](assets/image-20250422112705995.png)

第三步：主存有内容后通过内存中下和系统总线，为寄存器文件提供相应的数据，同时把对应的信息输出到显示器上

![image-20250422112957407](assets/image-20250422112957407.png)

## 高速缓存cashe

由于cpu和主存之间的运行速度有着巨大的差异，也就诞生了cache技术来解决这类问题。

cache分为L1、L2、L3，其中1-2是有一种静态随机访问存储器（SRAM）的硬件组成的。

## 存储设备的层次结构

![image-20250423154758641](assets/image-20250423154758641.png)

相邻的存储器，高的一层称为低的一层的高速缓存

## 操作系统管理硬件

![image-20250423155207946](assets/image-20250423155207946.png)

### 进程

**进程是程序在操作系统中运行时的基本单位**，包含了程序代码、执行信息等

操作系统使用**了“上下文”的机制来实现并发运行**（CPU同时处理多个任务，但每次只能处理一个；区别于并行：同时运行多个任务，一起推进任务）

- 并发：一个人同时吃三个馒头。
- 并行：三个人同时吃三个馒头。

**上下文**，包括PC和寄存器文件的值，主存内容，为操作系统提供了保持跟踪进程运行所需的**“所有运行信息”**

而实际的进行进程之间的切换是由**系统内核（Kernel）来完成**和管理的。每一次的进程切换后，会根据其他进程中保存起来的上下文信息，回复到中断的地方继续执行

#### 进程切换的步骤

以下是进程切换的典型步骤，由内核完成：

1. **选择下一个进程**：内核的调度器Kernel根据调度算法选择下一个要运行的进程。
2. **保存当前进程的上下文**：内核保存当前进程的寄存器状态、栈状态、内存映射信息等。
3. **恢复下一个进程的上下文**：内核恢复下一个进程的寄存器状态、栈状态等，使其能够从中断的地方继续执行。
4. **切换进程**：内核将控制权交给下一个进程，使其开始运行。

### 线程

**线程是进程中的一个执行单元**，线程运行在某一个进程中的上下文中，共同享有代码和数据

线程比进程的资源消耗更小，开辟和实现多线程也就比多进程更容易

### 虚拟内存

==以进程虚拟内存的形式寄生在磁盘上，并以此利用主存作为磁盘的高速缓存来减少之间的消耗

虚拟内存的核心就在于虚拟，“假象”，欺骗进程，让进程以为当前是内存，真面目却是在硬盘上的。由于“假象”的作用，导致每个进程看到的内存都是一致的，确保了“一致性”。

![image-20250424153529390](assets/image-20250424153529390.png)

毕竟肯定先要有相应的程序，的地址，那才有调用堆、栈这些的地址，一直传递到内核虚拟内存，也就是与kernel相关的

1. **代码（二进制）和数据（全局变量、静态变量、常量）在程序运行时占用的内存空间是固定部分**
2. **而可变部分包括：用户栈（用户运行时产生的形参、局部变量、返回值、递归空间，由系统自动回收）和运行堆区（包括动态开辟的空间，如malloc或new，需要手动回收）**
3. **固定区所占用的空间非常小，运行时消耗的内存主要取决于可变部分。**
4. 由于堆区系统不会自动回收，所以很容易出现内存泄漏的问题，但是java、python中不需要考虑

![image-20250424153729531](assets/image-20250424153729531.png)

### 文件

文件是以字节为单位的，因此也是一个字节序列。IO设备**包括网络**都算做文件体系

### 为什么说网络也是IO设备

![image-20250424154149974](assets/image-20250424154149974.png)

### 并发和并行

1. 线程级并发

   一个进程中多个线程同时执行，也就是多个控制流

   操作系统的并发本质是操作系统中多个进程（资源分配的基本单位）间的快速切换。就好像人类多任务处理一样，吃饭和看手机，看似是两个同时执行，其实也是并发的概念：在吃饭和手机中快速来回切换。

   我现在的电脑是将多个CPU（也叫“核”）集成到一个集成电路芯片上的一个多核处理器

   其中的每个核都有自己独立的L1（包括数据和指令）高速缓存和L2高速缓存，但是只有一个所有核共享的L3高速缓存

   ![image-20250424185658006](assets/image-20250424185658006.png)

   普通的一核心就是一线程，但是**超线程**就可以两线程

2. 指令集并行

   当代的先进的cpu使用流水线来同时执行多条指令，使处理器能够在一个周期的时间内，执行比一个周期还多的指令数，并且这称之为超标量处理器

3. 单指令、多数据并行

   如同字面意思，一条指令可以并行多条数据那么称之为SIMD

   ![](assets/20250411111243552.png)

   > **控制部分==指令，处理器=\=数据，主存=\=任一指令或数据的个数（一个/多个）**

## 小结

![image-20250603152027563](assets/image-20250603152027563.png)

# 信息的表示和处理

显然，信息的表示是用0、1的数字表示的，称之为位

没想到**有符号整数**的最常见的表示方式竟然是**补码编码**

可以了解到整数的数值表示的范围是很小的，但是却是一个很精确的数值；相对于浮点数而言，浮点数的数值范围很大，但相应的失去了精度，也就代表了浮点数的值的近似的

## 信息存储

在内存或的任意的存储设备之中，作为**最小的可寻址的内存单位**，那首先想到的就是**字节**了，也就是8位

那么，以字节为最小的可寻址内存单位的**内存**中的，每一个字节，都可以**用一串唯一的数字来表示，这个数字就是该字节的地址，地址的集合也就构成了虚拟内存空间。**

> **注意区别虚拟地址**

那么同理，在C语言当中，每个指针的值，都指向着对应的存储块的第一个字节的虚拟地址，例如指向字符数组的指针一样，是只指向 a[0] 的地址的

**程序**是很多字节组成的**字节序列**，而**程序对象**就只是这些序列中的一个**字节块**

> **信息存储位表示中常见的缩写含义：**
>
> 1. **HEX** ：十六[进制](https://so.csdn.net/so/search?q=进制&spm=1001.2101.3001.7020) **Hexa**decimal
>
> 2. **OCT** ：八进制 Octal
>
> 3. **DEC** ：十进制 Decimal
>
> 4. BIN ：二进制 Binary
>
>    以下内容对应下一小节的内容 ↓
>
> 5. 字**Word: 两个字节称为一个字, 即16位**
>
> 6. 双字**Dword: 两个字称为一个双字，两个Word，为32位** D为double
>
> 7. 四字**Qword: 两个双字称为一个四字，四个Word，为64位** Q为 quadra

### 字（字长）数据大小

用来**指明指针数据的指标的大小**为一个**字长（位）**，存在与每一台计算机当中。

而**虚拟地址是以每一位来编码的，所以字节决定了字长（位），也就决定了虚拟地址空间的大小**

> **虚拟地址空间并不直接等同于内存，内存更像是物理地址空间，而虚拟地址空间决定了内存理论上的上限，而内存是真实的实现**。
>
> 而虚拟地址空间和物理地址空间直接的转换一般是，虚拟地址空间通过页表映射成为物理地址。而具体的映射技术（虚拟内存管理）技术包括分页、分段的方式，毕竟，肯定不能一一映射啦，那效率太低了~

对于**一个字节为 w 位的机器，对应的虚拟地址范围总共有 2^w 个字节： 0 ~ 2^w - 1**

> 之所以这里指数函数的底是2，是因为**信息以位为单位的表示只有 0 和 1 两种**

那么，32 位字长的虚拟地址空间为4GB，而 64 位字长的虚拟地址空间有 16EB，因此，内存是完全够用的，大概也就不会出现 128 位的系统了~

### 寻址和字节顺序（大端法与小端法）

> 也叫**排列一个对象的字节的两种规则**

一个程序对象，不可能说只占用一个字节，那么在占用多个字节的程序对象中，它的存储肯定是一个**连续的字节序列**，并且该**程序对象的地址为该连续的字节序列中的最小地址，也就是第一个地址**（因为这些地址是按顺序排列的）。例如一个 4 字节的 int 的变量 x 的地址为 Ox100， 那么其对应的字节序列就是相应的四个地址，即Ox100、Ox101、Ox102、Ox103

字节排列顺序分为**小端法和大端法：**

![image-20250429175940409](assets/image-20250429175940409.png)

> 一个字节（8 位二进制）对应的是 2 个十六进制数

然鹅遗憾的是，**目前inter处理器是用的小端法的**，有点没想到。而且在**ARM架构中，只能运行小端模式**

也就是说，**一般而言，书写字节序列的方式是：低位的字节 代表的数据放在左边，而高位的字节 代表的数据放在右边**

> 然而，这个字节序列的排列方式只针对二进制数据生效，对于文本数据也就是ASCII数据来说，都是一致的，不存在不同系统不同的情况，也就是说文本数据中就没有排列这个概念了
>
> **总结就是，目前消费级cpu、ARM架构都是小端法**

### 编码问题

以字符编码为代表的**ASCII编码，其每个字符占用一个字节**，但是它的**局限性是没办法支持中文以及对很多符号都不支持，表示的范围还太小了。**不过，中国制定了`GB2312`编码，用来把中文编进去。

为了解决这个问题，推出了**Unicode编码（统一字符集），可以完美的适用于中文之中，它用16位来表示字符，也就是说每个字符都要占用2个字节来表示。它最常用的是UCS-16编码，用两个字节表示一个字符（如果要用到非常偏僻的字符，就需要4个字节）**。Unicode是固定为字符分配码点的标准，也可以理解为一般是定长了的，要动只能在2字节或4字节中动

为了更好的优化，推出了可变长的utf-8编码，它可以完美适配ASCII，一个文本数据它只分配1个字节，而如果一个汉字的话它可以分配到4个字节，它是动态调整的。

> 在某系统或某编译器上的二进制代码（机器语言），并不能适用于每个系统或编译器中，即使都是二进制代码，即**二进制代码是不兼容的**
>
> 二进制不兼容不代表着就是不可移植或者可移植性差的，可移植性好指的是源代码可移植性好，并非是编译后生成的二进制文件。

### 布尔代数

**二进制值是计算机编码、存储和操作信息的核心**  

![image-20250501150855540](assets/image-20250501150855540.png)

> **注意and里的命题逻辑是倒写的大V，而异或是倒写的小v**

#### 位移运算

1. 左移

   就是丢弃最高位k位，右侧填充0

2. **右移：分为逻辑右移和算术右移**

   1. **逻辑右移**：同左移一样，适用于**无符号数**
   2. **算术右移**：左侧**填充时，根据原值x的最高位，如果最高位是1就填充1**，否则0。例如1000 >>  2 == 1110，这里用了最高位1填充了左侧。**适用于有符号数**

> **如果没有告知有无符号，则默认1开头的（负数）为有符号数，此时右移就是算数右移**
>
> 无符号数只能逻辑右移
>
> **位移量k = 移动n位 % w位的数据**
>
> ![image-20250505110650523](assets/image-20250505110650523.png)

#### 加法逆元（异或运算）

例如**任意整数x都有一个加法逆元“-x”，使x + （-x）= 0**。而在布尔代数中，我们**用"^"，也就是异或来表示加法逆元**

**如x ^ x = 0**

满足以下性质的一个数**-~w~^u/t^x**，称之为加法逆元：

**(x + -~w~^u/t^x) % 2^w^ == 0**



**异或运算的性质**：

- 交换律：调整运算顺序不影响结果。如x ^ (x ^ y) == (x ^ x) ^ y == 0 ^ y == y
- 异或操作针对每个二进制位，结果是一个完整的二进制数。如4位的运算 0 ^ y == 0000 ^ xxxx == xxxx == y

## 整数表示

包括有无符号数的char、int、long

> 本章中用到的缩写的意思：
>
> 1. T——补码
> 2. B——原码
> 3. U——无符号数

### 无符号数的编码

**无符号数和它的编码（二进制）关系是双射**的关系。即无**符号数可以唯一确认一个二进制编码**，而**一个二进制编码也能唯一确认一个无符号数**，也就是说将这二者定义成一个函数，他们可以用反函数来表示，存在反函数。

> 无符号数的第一位不是符号位

### 有符号数的编码

#### 原码和反码（Ones' complement）

![image-20250605160413762](assets/image-20250605160413762.png)

![image-20250505143714256](assets/image-20250505143714256.png)

> **反码的目的是为了将减法运算转变成一个用负值表示的加法运算，即统一减法为加法：`A - B = A + (-B)`；补码的目的在于消除-0,**
>
> 原码、反码、补码是针对有符号数而言的，而有符号数中，正数值的原码、反码、补码都相同，**只有负数时需要考虑反码和补码**

#### 补码（Two's complement）

> **补码是用来表示一个有符号（正数或负数）数的**

![image-20250505142115070](assets/image-20250505142115070.png)

如图中所示，原码1011的补码为1101，即-5，就是上面求得的结果。

所以**负数原码计算其真实值（最高位为1的补码）有两种方式：**

1. 将原码**最高位的位权取负**，其他位权取正，**相加的结果就是该值的补码（真值）**
2. 将**原码除最高位外取反，之后加1**

> 因此补码的**最小值为100...0即只有最高位的负值，即-2^w-1^**
>
> 最大值为011...1，去除了最高位的权值，即![image-20250505142734642](assets/image-20250505142734642.png)
>
> 因此，只用记下面特殊的数据类型表示的大致范围：
>
> | 数据类型               | 范围                                                  |
> | ---------------------- | ----------------------------------------------------- |
> | Char                   | **-127** - **128**                                    |
> | Int（有符号）2字节16位 | **-32768 - 32767 = -2^15^ - 2^15^ - 1**               |
> | Int（无符号）2字节16位 | 0 - **65535（2^16^ - 1）**                            |
> | Int（有符号）4字节32位 | -2,147,483,648 - **2,147,483,647** = -2^31^ - 2^31^-1 |
> | Int（无符号）4字节32位 | -4,294,967,296 - **4,294,967,295** = -2^32^ - 2^32^-1 |

### 无符号数和补码的关系

1. **| TMin | = | TMax | + 1**  （因为正数里还包括了0）

2. **16位**位模式的情况下，有：**| 补码 | + | 无符号数表示 | = 2^16^**

   如![image-20250506165539617](assets/image-20250506165539617.png)

3. **补码转换为无符号数T2U：**

   ![image-20250506170236853](assets/image-20250506170236853.png)

   > 无符号数只有正值，所以当补码为负值时，要想办法搞成正值
   >
   > 推导：
   >
   > <img src="assets/image-20250605161959849.png" alt="image-20250605161959849" style="zoom: 50%;" />

4. **无符号数转为补码U2T：**

   ![image-20250506170827432](assets/image-20250506170827432.png)

   > 当无符号数值超出补码最大值时，要想办法搞成补码范围的值。一般超出多少，就从补码最小值往右多少，如图所示：
   >
   > <img src="assets/image-20250529154834153.png" alt="image-20250529154834153" style="zoom: 67%;" />
   >
   > 推导：
   >
   > <img src="assets/image-20250605164823718.png" alt="image-20250605164823718" style="zoom:60%;" />

5. **1 + UMax~w~ = 2^w^  |  UMax~w~ = 2^w^ - 1**

这三条公式具体例子可以参考下图：

![image-20250506164831332](assets/image-20250506164831332.png)

![image-20250506165727495](assets/image-20250506165727495.png)

总之这两者的转换的图像解释可以理解为：

![image-20250506170855910](assets/image-20250506170855910.png)

### C语言中的无符号数

C语言中只有特别的给定u或U指定为无符号数，否则**默认都是认为是一个有符号数**，如123U

C语言的运算中，**一个有符号数与一个无符号数进行运算，则系统会隐式的将有符号数变为无符号数，这就有可能导致错误的结果**，如 -1 < 0U，结果应该是1，但是有符号数-1自动转换为无符号数xxx，导致得出错误的结果0

![image-20250506173952324](assets/image-20250506173952324.png)

> **C语言中，系统会对有符号数和无符号数之间的运算时会隐式的将有符号数变为无符号数**
>
> C语言Tmin写法：**Tmin = -2147483647 - 1**
>
> ![image-20250605165323950](assets/image-20250605165323950.png)

### 位扩展

**从一个较小的位数扩展到一个较大的位数是就会触发位扩展，目的是为了保持原始的值不变**。例如从16位的数据类型扩展到32位的数据类型，即short扩展到int

分为两种位扩展：

1. **无符号数用0扩展**

   如16->32多出来的两个字节全部用0来存放

2. **有符号数用符号位扩展**

   多出的两个字节用最高位1或者0来存放

![image-20250605175912150](assets/image-20250605175912150.png)

**位扩展保持原始的值不变的例子：**

![image-20250507153318122](assets/image-20250507153318122.png)

> **转换类型中的隐式的位扩展：short转成无符号数时会先自动扩展成int型**
>
> ![image-20250507154134810](assets/image-20250507154134810.png)
>
> 补码符号扩展值不变的证明：
>
> ![image-20250605180431931](assets/image-20250605180431931.png)

### 截断位

> **截断就是取模**

既然有位扩展，那相应的也就有截断位或者说减少位。然而遗憾的是，**截断后的数值和原来的数值不一定相同**

有两种截断的方式，设**截断为k位**的结果，**截断都是从最高位开始截断的（保留低 k 位的意思）**：

1. 截断无符号数

   **截断后的值 = x mod 2^k^**

2. 截断有符号数（补码）

   **截断后的值 = U2T~k~ (x mod 2^k^)**

![image-20250517155248322](assets/image-20250517155248322.png)

### 本章建议

**建议不要使用无符号数**

## 整数运算

### 无符号数加法（运算溢出）

若两个4位的数值相加，其值最大会有30，也就是需要用5位来表示，这就导致了溢出现象。即w位的数字x、y时，x + y 结果实际为：

- x + y   ——x + y < 2^w^（**正常情况**）
- **x + y - 2^w^ ——2^w^ < x + y < 2^w+1^**（**溢出**）

![image-20250519160620493](assets/image-20250519160620493.png)

例如，4位的运算：9 + 12 = 21，此时需要用5位来表示21这个结果。丢掉最高位的话，结果为5，就回到了正常的4位表示范围，也就是 9 + 12 最终的值为5（当然，是在只有4位表示的情况下）

> 由此可得：**没溢出时满足条件：x + y >= x**

### 无符号数的加法逆元

若$\exists$ X，使得(x - X + 2^w^) mod 2^w^ == 0，则就可以称 X 是 x 的一个加法逆元。

![image-20250601145445721](assets/image-20250601145445721.png)

> **阿贝尔群**（Abelian Group），又称交换[群](https://baike.baidu.com/item/群/6977479?fromModule=lemma_inlink)或加群，是这样一类群：
>
> 它由[自身](https://baike.baidu.com/item/自身/0?fromModule=lemma_inlink)的集合 G 和[二元运算](https://baike.baidu.com/item/二元运算/748189?fromModule=lemma_inlink) * 构成。它除了满足一般的群公理，即运算的[**结合律**](https://baike.baidu.com/item/结合律/2173834?fromModule=lemma_inlink)、G 有[单位元](https://baike.baidu.com/item/单位元/11035606?fromModule=lemma_inlink)（类似单位矩阵一样，和一个数作乘法时不改变结果）、所有 G 的元素都有逆元之外，还满足[交换律](https://baike.baidu.com/item/交换律/2173703?fromModule=lemma_inlink)公理。
>
> **整数、实数的加法都构成了一个阿贝尔群**

### 补码加法（运算溢出）

无符号数就只有正溢出这个概念，轮到补码这，就可能出现正溢出、负溢出的概念了。

![image-20250519142244227](assets/image-20250519142244227.png)

> 目的是为了让正溢出部分化为负值；负溢出部分化为正值

![image-20250519143422791](assets/image-20250519143422791.png)

案例如下图所示：

![image-20250519143443366](assets/image-20250519143443366.png)

**在代码中检测补码加法是否溢出的情况：**

```cpp
// 如果参数x和y相加不会产生溢出，这这个函数返回1
int tadd_ok(int x, int y) {
    int s = x + y;
    if (x > 0 && y > 0 && s <= 0) {
        return 0; // 正数相加溢出
    } else if (x < 0 && y < 0 && s >= 0) {
        return 2; // 负数相加溢出
    }
    return 1;
}
```

### 补码的加法逆元

也称之为**补码的非**

- **方法一：**

![image-20250519163445699](assets/image-20250519163445699.png)

例如：

![image-20250519170341492](assets/image-20250519170341492.png)

- **方法二（位级表示）：**

  **对补码的包括符号位的每一位取反，后加1**。即**-x == ~x + 1**

  ![image-20250520175915963](assets/image-20250520175915963.png)

  > **注意这里是求补码的非（加法逆元或相反数）时，是包括符号位都取反；而一个负数的原码转换成补码时，是不包括符号位进行取反的，注意区分！**

- **方法三（位级表示）：**

  找到**补码x中最右边的1，接下来，将这个1左边的包括符号位的所有位取反**。**例如[1010] = -6，那么结果就是[0110] = 6**

  ![image-20250520180100464](assets/image-20250520180100464.png)

### 无符号乘法

因为无符号数的表示范围有限，所以两个无符号数的乘积如果超过了w位，则超过w位的部分需要截断处理，而截断处理就是直接取2^w^的模，即：

![image-20250522135208569](assets/image-20250522135208569.png)

> 注意，w位的x和y相乘后，得到的是一个2w位的表示，那么此时可能会超出所规定的位的大小，那么就需要用到截断的知识来处理。

### 补码乘法

**补码乘法就是将无符号乘法的结果转换成补码形式即可，即运用一次U2T**，如下所示：

![image-20250522140343083](assets/image-20250522140343083.png)

> 无符号和补码乘法，截断后的每一位数值相同，但是各自表示的值是不同的，因为补码第一位是0或负值表示。
>
> 学到这里可以发现，所有补码的运算：加法、乘法，都是在无符号数运算的基础上，最后把值转换为补码形式，即U2T。但有时候如果给的值是补码形式，那么还要转换为原码进行运算之后才是转换

### 乘常数

由于**乘法指令很慢，往往需要10+个时钟周期，而加法、减法、位移只需要1个时钟周期**，这也就导致了编译器为了更好的优化，而**采用位移的方式来表示乘法**。如乘2的幂，就只需要左移k位即可

由于无符号数和补码的运算都满足结合律、交换律和分配律  ，因此编译器就能用位移的方式来表达一个乘法运算，如：

**(x<<3) - x == 7*x**

![image-20250522151058392](assets/image-20250522151058392.png)

> **乘法：可以用位移 + 加减法表示任意常数，如↑的重写一样**

### 除2的幂

> **遗憾的是，除法并不能像乘法一般地表示任意的常数；对于2的幂确实可以明确表示，但对于不是2的幂的数只能是近似的表示**

**除法比乘法的运算速度会更慢，需要30个时钟周期左右**

除法同样是用右移来表示，这样的优化才能加速计算速度

**当 x >= 0, y > 0 时，x / y 的结果向下取整；当 x < 0, y > 0 时，x / y 的结果，向上取整**

- **向下取整（舍入）**的情况：

  适用于无符号数或者正值的有符号数

  ![image-20250531154054556](assets/image-20250531154054556.png)

- **向上取整（舍入）**的情况，通过**添加偏置值来修复无法向上取整（错误的向下取整了）的错误**：

  适用于负值的有符号数
  
  ![image-20250531155605151](assets/image-20250531155605151.png)
  
  > **即计算机通过偏置和向下取整的方式实现了负值补码除法中的向上取整。**

在C语言中，用来表示这两种情况的表达式表示：

**(x < 0 ? x + (1 << k) - 1 : x) >> k**

## 浮点数

当一个数字不能被准确地表示为浮点格式时，就必须向上调整或者向下调整  

### 二进制小数

显然，二进制小数中的小数点向左移动一位就表示该数除以2；向右移动一位就表示该数乘以2

二进制小数和十进制小数的差异

- 小数的**二进制表示法呢可以很容易的表达出 x * 2^y^ 的数**，但其他的值只能够近似地表示
- 小数的**十进制表示法呢可以表示一些特定的数，如 1/5 可以用 0.2 来表示**，但同样的，对于 1/3 这类值，也是同样只能够近似的表示

所以，这就引出了浮点数的精度问题，如果**一个浮点数类型的字长越长，尾数位就越多，能表示的有效数字位数就越多，那么这个近似值就能够越接近于其真值**。

> **IEEE阶码位数为什么是8和11的扩展（属于下一小节↓，放在这里解释）**
>
> 单精度的 **8位阶码** 和双精度的 **11位阶码** 是 IEEE 754 标准制定者基于**总位数限制**，对**数值范围**（由阶码位决定）和**数值精度**（由尾数位决定）进行**精心权衡**后得出的最优分配方案：
>
> 1. **单精度 (8位阶码, 23位尾数)**：在32位约束下，提供了**足够宽泛的数值范围**（10^±38^）和**可接受的计算精度**（约7位有效数字），满足大多数通用计算需求。
> 2. **双精度 (11位阶码, 52位尾数)**：在64位约束下，提供了**极其巨大的数值范围**（10^±308^）和**非常高的计算精度**（约15-16位有效数字），满足了科学计算、工程仿真、金融等对精度要求极高的领域的需求。11位阶码提供的范围已经绰绰有余，将更多位分配给尾数以追求极致精度是更明智的选择。
>
> - **单精度 (32位)：**
>   - `1 (符号) + k (阶码) + M (尾数) = 32` => `k + M = 31`
>   - 如果 `k=7`：指数范围太小（大约 -62 到 +63），很多实际应用（物理、天文、工程）会遇到上溢/下溢问题。尾数 `M=24`，精度提升有限（约 7.2 位十进制）。
>   - 如果 `k=9`：指数范围更大（大约 -254 到 +255），但尾数 `M=22`，精度显著下降（约 6.6 位十进制），这对于需要一定精度的计算来说损失太大。
>   - **`k=8` 是最优解**：指数范围 `-126 ~ +127`（约 10^±38 数量级）满足了绝大多数应用对范围的需求，同时尾数 `M=23` 提供的精度（约 7.2 位十进制）也是可接受的。
> - **双精度 (64位)：**
>   - `1 (符号) + k (阶码) + M (尾数) = 64` => `k + M = 63`
>   - 如果 `k=10`：指数范围约 -510 到 +511（10^±154 数量级）。尾数 `M=53`。
>   - 如果 `k=12`：指数范围约 -2046 到 +2047（10^±616 数量级），极其巨大，但尾数 `M=51`，精度下降明显（损失约 1 位二进制精度）。
>   - **`k=11` 是最优解**：指数范围 `-1022 ~ +1023`（约 10^±308 数量级）已经非常巨大，足以覆盖天文数字和微观粒子等极端场景。同时尾数 `M=52` 提供的超高精度（约 15-16 位十进制）是科学计算、金融、高精度模拟等领域的核心需求。牺牲一点几乎用不到的额外指数范围来换取至关重要的精度提升是明智的选择。

### IEEE浮点表示

> 电气和电子工程师协会 ( IEEE, 读做 "eye-triple-ee" ) 是一个包括所有电子和计 算 机技术的专业团体 。   
>
> 浮点数使用 IEEE 标准 754 编码  

IEEE 浮点标准用

 **V = (-1)^s^* M * 2^E^** 

的形式来表示一个数：

![image-20250531163705391](assets/image-20250531163705391.png)

其中单精度和双精度的表示还有所不同：

| 精度                 | 符号位(s) | 阶码位(exp 或 k位 或 无符号数e) | 尾数位(frac 或 M) |
| -------------------- | --------- | ------------------------------- | ----------------- |
| 单精度（float）32位  | 1         | **8（bias = 127）**             | **23**            |
| 双精度（double）64位 | 1         | **11（bias = 1023）**           | **52**            |

> 当阶码值不是边界值时，表示的是一个二进制位表示的无符号正数e，用于计算规格化的阶码 E

**根据阶码位，也就是exp位，可以分为下面三种单精度的表示情况**（第三种有两个变体形式）：

![image-20250531164208238](assets/image-20250531164208238.png)

1. **规格化（一般化）的情况：**

   当**exp 或 e 的位不全为0或1时**，就属于该情况。此时阶码 **E = e - Bias**。其中 **e 就是↑上面蓝色部分的二进制位表示的无符号正数，而Bias是一个固定的值，其值根据阶码的位数来决定，如单精度时，k = 8，此时 2^7^-1 = 127（双精度是1023）**，由此可得：

   - **E = e - 127**    E范围是 **-126 到 +127**（**单**精度的情况）
   - **E = e - 1023**    E范围是 **-1022 到 +1023**（**双**精度的情况）

   > 因为 e 不全为 0 或 1 ，此时 e 的范围就只有 **1-254**，根据该 e 的范围才得出上述的 E 的范围

   **小数字段 frac 用来描述小数值 f，0 <= f < 1，也就是小数点放在 f 最高有效位的左边。将尾数 M 定义为 M = 1 + f。该定义方式，也叫隐含的以1开头的表示，可得 1 <= M < 2。但由于它的第一位总是 1，所以我们一般不显示它**，也就是最终结果 **V = (-)0.xxx * 2^E^**

   > f可以这么算：
   >
   > **用小数字段frac所表示的无符号值 / 2^该frac的位数^**

2. **非规格化（不一般）的情况：**

   当**exp 或 e 的位全为0时**，此时阶码 **E = 1 - Bias = 1 - 127 = -126（单精度情况下），而 M = f**

   非规格化数有两个用途：

   - 首先，它们提供了一种表示数值 0 的方法 ，规格化因为 M 会加1，所以最小值是 1 没法表示 0。
   - 还可以用来表示非常接近于 0.0 的数。他们提供了一种属性，称为逐渐溢出，其中，数值分部均匀地接近于 0.0

3. **特殊情况：**

   - 当**exp 或 e 的位全为1，且小数域全为0时，表示的无穷，正负无穷由符号位决定。正如 xx / +- 0 一般得到的是正负无穷**
   
   - **当小数域为非零时，结果值被称为 "NaN"**, 即“不是一个数 (Not a Number)" 的缩写。一些运算的结果不能是实数或无穷
   
     ![image-20250601165724681](assets/image-20250601165724681.png)

### IEEE浮点表示案例

可以结合上一讲的公式食用

![image-20250601165910853](assets/image-20250601165910853.png)

**可以发现十进制整数部分，是按照递增顺序排序的**，这也是IEEE格式如此设计的核心

![image-20250601170123272](assets/image-20250601170123272.png)

### 舍入

浮点运算只能近似地表示实数运算，那么找到一个最近接的值就显得尤为重要。IEEE定义了四种不同的舍入方式，**默认的舍入方式是向偶舍入（round-to-even），也叫做向最接近的值舍入（round-to-nearest）**：

![image-20250601170919425](assets/image-20250601170919425.png)

> **像python中的内置round库，就是用的向偶数舍入的方式，这一点要注意了**

向偶舍入就是为了避免全部都是向上舍入导致的平均值增大和全部都是向下舍入导致的平均值减小，就是为了避免这种统计偏差而产生的，50%的时间是向上舍入，另一半则是向下舍入。

- **二进制小数里使用向偶数舍入法：**

  ![image-20250601171448127](assets/image-20250601171448127.png)

  > **注意：二进制10.011保留一位小数的话，是舍入成10.1，细节如下：**
  >
  > 1. **舍入位 = 0**（全为0）→ 直接舍去（不进位）。
  > 2. **舍入位 > 100...0**（即最高位为1且后续有非0位）→ 进位（加1到保留的最后一位）。
  > 3. **舍入位 = 100...0**（恰好是0.5 ULP）→ 向最近的偶数舍入：
  >    - 保留的最后一位为 **0（偶数）** → 舍去（不进位）。
  >    - 保留的最后一位为 **1（奇数）** → 进位（加1）。

### 舍入案例

![image-20250602194430214](assets/image-20250602194430214.png)

#### 转换结果：

| 格式A位模式 | 格式A值 | 格式B位模式 | 格式B值 | 计算说明                                     |
| :---------- | :------ | :---------- | :------ | :------------------------------------------- |
| 011 0000    | 1       | 0111 000    | 1       | [示例] 1 = 1.0 × 2⁰ → E=0, e=7 (0111), f=000 |
| 101 1110    | 15/2    | 1001 111    | 15/2    | 7.5 = 1.111 × 2² → E=2, e=9 (1001), f=111    |
| 010 1001    | 25/32   | 0110 100    | 3/4     | 0.78125 → 1.1001×2⁻¹ → 舍入到1.100 (0.75)    |
| 110 1111    | 31/2    | 1011 000    | 16      | 15.5 → 1.1111×2³ → 舍入进位得16.0            |
| 000 0001    | 1/64    | 0001 000    | 1/64    | 0.015625 = 1.0 × 2⁻⁶ → E=-6, e=1 (0001)      |

#### 详细计算过程

##### 格式A `101 1110` → 格式B

- **阶码** `101` = 5
  → $E = 5 - 3 = 2$
- **小数** `1110` = $\frac{14}{16} = \frac{7}{8}$
  → $M = 1 + \frac{7}{8} = \frac{15}{8}$
- **值** $V = \frac{15}{8} \times 2^2 = \frac{15}{2} = 7.5$
- **格式B表示**：
  - $7.5 = 1.875 \times 2^2 = 1.111_2 \times 2^2$
  - 阶码 $e = 2 + 7 = 9$ → `1001`
  - 小数 `111`（保留3位）
  - → **`1001 111`**（值仍为7.5）

##### 格式A `010 1001` → 格式B

- **阶码** `010` = 2
  → $E = 2 - 3 = -1$
- **小数** `1001` = $\frac{9}{16}$
  → $M = 1 + \frac{9}{16} = \frac{25}{16}$
- **值** $V = \frac{25}{16} \times 2^{-1} = \frac{25}{32} = 0.78125$
- **格式B表示**：
  - **$0.78125 = 1.5625 \times 2^{-1} = 1.1001_2 \times 2^{-1}$**
  - **舍入：`1.1001` → 第4位=1 → 向偶数舍入 → `1.100`（末尾0为偶数）**
  - 阶码 $e = -1 + 7 = 6$ → `0110`
  - 小数 `100`
  - → **`0110 100`**（值 $1.5 \times 2^{-1} = 0.75 = \frac{3}{4}$）

##### 格式A `110 1111` → 格式B

- **阶码** `110` = 6
  → $E = 6 - 3 = 3$

- **小数** `1111` = $\frac{15}{16}$
  → $M = 1 + \frac{15}{16} = \frac{31}{16}$

- **值** $V = \frac{31}{16} \times 2^3 = \frac{31}{2} = 15.5$

- **格式B表示**：

  - **$15.5 = 1.9375 \times 2^3 = 1.1111_2 \times 2^3$**

  > **为什么 $15.5 = 1.9375 \times 2^3$？**
  >
  > **步骤 1：整数部分转换**
  >
  > - $15_{10} = 1111_2$
  > - $0.5_{10} = 0.1_2$
  > - 合并：$15.5_{10} = 1111.1_2$
  >
  > **步骤 2：科学计数法规范化**
  >
  > - 移动小数点，使整数部分为 `1`：
  >   1111.12=1.11112×231111.12​=1.11112​×23
  >   （左移 3 位，对应指数 $+3$）
  >
  > **验证：**
  >
  > 1.11112×23=1111.12=15.5101.11112×23=1111.12=15.510

  - **舍入**：`1.1111` → 第4位=1 → 进位 → `10.0000` → 规格化为 $1.0000 \times 2^4$
  - 阶码 $e = 4 + 7 = 11$ → `1011`
  - 小数 `000`
  - → **`1011 000`**（值 $16$）

##### 格式A `000 0001` → 格式B

- **阶码全0** → 非规格化：
  $E = 1 - 3 = -2$
- **小数** `0001` = $\frac{1}{16}$
  → $M = f = \frac{1}{16}$
- **值** $V = \frac{1}{16} \times 2^{-2} = \frac{1}{64}$
- **格式B表示**：
  - $\frac{1}{64} = 1.0 \times 2^{-6}$
  - 阶码 $e = -6 + 7 = 1$ → `0001`
  - 小数 `000`
  - → **`0001 000`**（值仍为 $\frac{1}{64}$）

### 关键点

- **舍入规则**：向偶数舍入（Round-to-even），中间值时选择末尾为偶数的表示。
  例如 `1.1001` 舍入到3位小数 → `1.100`（因末尾0为偶数）。

### 浮点运算

1. 整数加法和**实数的加法（不等同于浮点数）都构成了一个阿贝尔群**，即无符号数和补码运算满足结合律、交换律和分配率

2. **浮点数加法运算是可交换、具有单调性，不可结合、分配的**

   ![image-20250602154713992](assets/image-20250602154713992.png)

   > 扩展：各地方的空值表示
   >
   > <img src="assets/image-20250602155105584.png" alt="image-20250602155105584" style="zoom:50%;" />

3. **浮点数乘法运算是可交换、具有单调性，不可结合、分配的**

   ![image-20250602155409592](assets/image-20250602155409592.png)

   > 因此，我们**不能说浮点数是满足阿贝尔群的**，只是实数符合

### C语言中的浮点数

**C语言中，float和double都是默认向偶舍入的方式，但是如果浮点数转成int，则是向零舍入了。**



C语言中int、float和double之间强制转换的规则如下：

1. **int -> float 不会溢出，但可能舍入**
2. int/float -> double 保留精确值，更高精度 
3. **double -> float 可能溢出成正负无穷或者舍入**
4. **float/double -> int 向零舍入**
5. **浮点到整数的溢出可能成TMin**

![deepseek_mermaid_20250602_3f94bb](assets/deepseek_mermaid_20250602_3f94bb.png)

```c
#include <stdio.h>
#include <limits.h>


// 生成特殊浮点值的宏定义
#define POS_INFINITY (1.0e308 * 1.0e308)  // 正无穷
#define NEG_INFINITY (-1.0e308 * 1.0e308) // 负无穷
#define NEG_ZERO (-1.0 / POS_INFINITY)    // 负零

int main() {
    double pos_inf = POS_INFINITY;
    double neg_inf = NEG_INFINITY;
    double neg_zero = NEG_ZERO;
    
    printf("正无穷: %f\n", pos_inf);       // 输出: inf
    printf("负无穷: %f\n", neg_inf);       // 输出: -inf
    printf("负零: %f\n", neg_zero);        // 输出: -0.000000
    printf("1/负零: %f\n", 1.0/neg_zero); // 输出: -inf
    
    // ------- 浮点数转换和舍入 -------
    // 1.int -> float 舍入
    int big_int = 16777217; // 2^24 + 1
    float f = (float)big_int;
    printf("int(%d) -> float: %.1f (舍入损失)\n", big_int, f);
    // 输出: 16777216.0 (丢失精度)

    // 2.int/float -> double 保留精确值 
    double d1 = big_int;
    double d2 = f;
    printf("int(%d) -> double: %.1f\n", big_int, d1);
    printf("float(%.1f) -> double: %.1f\n", f, d2);
    // 输出精确值

    // 3.double -> float 溢出和舍入
    double huge = 1.0e308;
    float f_huge = (float)huge;
    printf("double(%.1e) -> float: %f (溢出为inf)\n", huge, f_huge);
    // 输出: inf

    // 4.float/double -> int 向零舍入
    double d3 = 1.999;
    double d4 = -1.999;
    int i1 = (int)d3;
    int i2 = (int)d4;
    printf("double(%.3f) -> int: %d\n", d3, i1); // 输出: 1
    printf("double(%.3f) -> int: %d\n", d4, i2); // 输出: -1

    // 5.浮点到整数的溢出 (Intel示例)
    double overflow = 1e10;
    int overflow_int = (int)overflow;
    printf("double(%.0f) -> int: %d (溢出为负值)\n", overflow, overflow_int);
    // 输出: -2147483648 (TMin)
    
    // 5的更多例子
    d3 = INT_MAX + 1.0; // 2,147,483,648
    printf("(int)%.0f = %d (溢出)\n", d3, (int)d3); // -2147483648
    // 负数溢出
    double d5 = INT_MIN - 1.0; // -2,147,483,649
    printf("(int)%.0f = %d (负溢出)\n", d5, (int)d5); // -2147483648

    return 0;
}
```

## 小结

![image-20250603151835496](assets/image-20250603151835496.png)

# 程序的机器级表示













































