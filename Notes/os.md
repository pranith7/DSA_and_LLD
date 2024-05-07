1.  What is the main purpose of an operating system? Discuss different types?
```
An operating system (OS) is system software that manages computer hardware, software resources, and provides common services for computer programs. So it manages the computer's memory, processes, devices, files, and security aspects of the system. It also allows us to communicate with the computer without knowing how to speak the computer's language. Without an operating system, a computer is not useful.

Types of operating system:

    Batch OS
    Distributed OS
    Multitasking OS
    Network OS
    Real-Time OS
    Mobile OS
```
2. What is a socket, kernel and monolithic kernel ? 
```
Socket:
A socket is defined as an endpoint for communication, A pair of processes communicating over a network employ a pair of sockets ,one for each process. A socket is identified by an IP address concatenated with a port number.
The server waits for incoming client requests by listening to a specified port. Once a request is received, the server accepts a connection from the client socket to complete the connection.

Kernel is the central core component of an operating system that manages operations of computer and hardware. Kernel Establishes communication between user level application and hardware. Manages memory and CPU time. Decides state of incoming processes. Controls Disk, Memory, Task Management

Monolithic Kernel (provides good performance but lots of lines of code)
It is one of the types of kernel where all operating system services operate in kernel space. It has dependencies between system components. It has huge lines of code which is complex.
Example : Unix, Linux, Open VMS, XTS-400 etc.
```
3. Difference between process and program and thread? Different types of process. 
```
Process:
Process is an instance of an executing program. For example, we write our computer programs in a text file and when we execute this program, it becomes a process which performs all the tasks mentioned in the program.

Program:
Program is a set of instructions to perform a certain task. Eg: chrome.exe, notepad.exe

Thread:
Thread is a path of execution within a process. A thread is also known as a lightweight process. The idea is to achieve parallelism by dividing a process into multiple threads. For example,Word processor uses multiple threads: one thread to format the text, another thread to process inputs.

```
4. Define virtual memory, thrashing, threads.
```
Virtual Memory:
A computer can address more memory than the amount physically installed on the system. This extra memory is actually called virtual memory and it is a section of a hard disk that's set up to emulate the computer's RAM.
The main visible advantage of this scheme is that programs can be larger than physical memory. Virtual memory serves two purposes. First, it allows us to extend the use of physical memory by using a disk. Second, it allows us to have memory protection, because each virtual address is translated to a physical address.

Thrashing:
Thrashing is a condition or a situation when the system is spending a major portion of its time in servicing the page faults, but the actual processing done is very negligible. High degree of multiprogramming(if number of processes keeps on increasing in the memory), lack of frames (if a process is allocated too few frames, then there will be too many and too frequent page faults) causes Thrashing.

Threads:
A thread is a single sequential flow of execution of tasks of a process so it is also known as thread of execution or thread of control.

```
5. What is RAID ? Different types.
```
RAID, or “Redundant Arrays of Independent Disks” is a technique which makes use of a combination of multiple disks instead of using a single disk for increased performance, data redundancy or both.Data redundancy, although taking up extra space, adds to disk reliability. This means, in case of disk failure, if the same data is also backed up onto another disk, we can retrieve the data and go on with the operation.

```
6. What is a deadlock? Different conditions to achieve a deadlock. 
```
A Deadlock is a situation where each of the computer processes waits for a resource which is being assigned to some other process. In this situation, none of the processes gets executed since the resource it needs is held by some other process which is also waiting for some other resource to be released.

How deadlock is achieved: Deadlock happens when Mutual exclusion, hold and wait, No preemption and circular wait occurs simultaneously.

Necessary Conditions for deadlock:

Mutual Exclusion
Hold and Wait
No preemption
Circular Wait
```
7. What is fragmentation? Types of fragmentation. 
```
Fragmentation:
An unwanted problem in the operating system in which the processes are loaded and unloaded from memory, and free memory space is fragmented. Processes can't be assigned to memory blocks due to their small size, and the memory blocks stay unused. It is also necessary to understand that as programs are loaded and deleted from memory, they generate free space or a hole in the memory. These small blocks cannot be allotted to new arriving processes, resulting in inefficient memory use.

The conditions of fragmentation depend on the memory allocation system. As the process is loaded and unloaded from memory, these areas are fragmented into small pieces of memory that cannot be allocated to incoming processes. It is called fragmentation.

Types of fragmentation:
1. Internal
2. External

```
8. What is spooling ? 
```
SPOOL is an acronym for simultaneous peripheral operations online. Spooling is a process in which data is temporarily held to be used and executed by a device, program, or system.

In spooling, there is no interaction between the I/O devices and the CPU. That means there is no need for the CPU to wait for the I/O operations to take place. Such operations take a long time to finish executing, so the CPU will not wait for them to finish.

The biggest example of Spooling is printing. The documents which are to be printed are stored in the SPOOL and then added to the queue for printing. During this time, many processes can perform their operations and use the CPU without waiting while the printer executes the printing process on the documents one-by-one.

```
9. What is semaphore and mutex (Differences might be asked)? Define Binary semaphore. 
```
Semaphore and mutex are both synchronization primitives used in concurrent programming to control access to shared resources. While they serve similar purposes, they have some differences in how they operate.

1. **Mutex (Mutual Exclusion)**:
   - Mutex is a locking mechanism used to ensure that only one thread at a time can access a shared resource.
   - It provides mutual exclusion, meaning that when a thread acquires a mutex, it has exclusive access to the resource until it releases the mutex.
   - Typically, mutexes are used to protect critical sections of code where shared resources are accessed to prevent race conditions.

2. **Semaphore**:
   - Semaphore is a signaling mechanism used to control access to a shared resource that has a fixed number of instances available.
   - Unlike mutexes, which provide exclusive access to a resource, semaphores can allow multiple threads to access the resource simultaneously, up to a specified limit.
   - Semaphores maintain a count of available resources and allow threads to acquire and release resources based on this count.

**Differences**:

- **Purpose**:
  - Mutex: Provides mutual exclusion, ensuring only one thread accesses a resource at a time.
  - Semaphore: Controls access to a resource with a fixed number of instances, allowing multiple threads to access it within the specified limit.

- **Usage**:
  - Mutex is typically used to protect critical sections of code where shared resources are accessed to prevent race conditions.
  - Semaphore is used to control access to a finite pool of resources, such as a fixed number of connections to a database or a limited number of instances of a resource.

- **Counting**:
  - Mutexes do not have a count associated with them. They are either locked (held) or unlocked (available).
  - Semaphores maintain a count of available resources and allow threads to acquire and release resources based on this count.

**Binary Semaphore**:
A binary semaphore is a special case of a semaphore where the count is restricted to either 0 or 1. It is similar to a mutex in that only one thread can access the shared resource at a time. It can be thought of as a mutex with a more general signaling mechanism. When the count is 0, the resource is unavailable, and a thread trying to access it will be blocked until the count becomes 1. When the count is 1, the resource is available, and a thread accessing it will decrement the count to 0, indicating that it is now in use. When the thread releases the resource, it increments the count back to 1, making it available again.

```
10. Belady’s Anomaly
```
Bélády’s anomaly is the name given to the phenomenon where increasing the number of page frames results in an increase in the number of page faults for a given memory access pattern.

Solution to fix Belady’s Anomaly:
Implementing alternative page replacement algo helps eliminate Belady’s Anomaly.. Use of stack based algorithms, such as Optimal Page Replacement Algorithm and Least Recently Used (LRU) algorithm, can eliminate the issue of increased page faults as these algorithms assign priority to pages

```
11. Starving and Aging in OS
```
Starving/Starvation(also called Lived lock): Starvation is the problem that occurs when low priority processes get jammed for an unspecified time as the high priority processes keep executing. So starvation happens if a method is indefinitely delayed.

Solution to Starvation : Ageing is a technique of gradually increasing the priority of processes that wait in the system for a long time.

```
12. Why does trashing occur? 
```
High degree of multiprogramming(if number of processes keeps on increasing in the memory) , lack of frames(if a process is allocated too few frames, then there will be too many and too frequent page faults.) causes Thrashing.

```
13. What is paging and why do we need it? 
```
Paging is a memory management scheme that eliminates the need for contiguous allocation of physical memory. This scheme permits the physical address space of a process to be non – contiguous.

Paging is used for faster access to data. When a program needs a page, it is available in the main memory(RAM) as the OS copies a certain number of pages from your storage device to main memory. Paging allows the physical address space of a process to be noncontiguous.

```
14. Demand Paging, Segmentation 
```
Demand paging is a method of virtual memory management which is based on the principle that pages should only be brought into memory if the executing process demands them. This is often referred to as lazy evaluation as only those pages demanded by the process are swapped from secondary storage to main memory.
So demand paging works opposite to the principle of loading all pages immediately.

Segmentation is a memory management technique in which the memory is divided into the variable size parts. Each part is known as a segment which can be allocated to a process.

The details about each segment are stored in a table called a segment table. Segment table is stored in one (or many) of the segments.

Segment table contains mainly two information about segment:

Base: It is the base address of the segment
Limit: It is the length of the segment.

```
15. Real Time Operating System, types of RTOS. 
```
A real-time operating system (RTOS) is a special-purpose operating system used in computers that has strict time constraints for any job to be performed and is intended to serve real time applications that possess data as it comes in , typically without buffer delays.

Types of RTOS:

Hard RTOS
Firm RTOS
Soft RTOS
```
16. Difference between main memory and secondary memory. 
```
Main memory (also known as primary memory) and secondary memory are two types of memory storage in a computer system, each serving different purposes and having distinct characteristics.

1. **Main Memory (Primary Memory)**:
   - Main memory refers to the volatile memory directly accessible to the CPU.
   - It is used to store data and instructions that are actively being used by the CPU during program execution.
   - Main memory is typically made up of Random Access Memory (RAM) chips.
   - It is fast and relatively expensive compared to secondary memory.
   - Main memory loses its content when power is turned off, making it volatile.

2. **Secondary Memory**:
   - Secondary memory is non-volatile memory used to store data and programs for long-term storage.
   - It is not directly accessible by the CPU and requires data to be transferred to main memory for processing.
   - Secondary memory devices include hard disk drives (HDDs), solid-state drives (SSDs), optical disks (such as CDs and DVDs), and magnetic tapes.
   - Secondary memory is slower than main memory but offers much larger storage capacities at a lower cost per unit of storage.
   - Data stored in secondary memory remains intact even when the power is turned off, making it non-volatile.

**Differences**:

- **Access Time**: Main memory has faster access times compared to secondary memory. The CPU can directly access data stored in main memory, leading to quicker data retrieval and execution. In contrast, accessing data from secondary memory involves longer access times due to the need for data transfer between secondary and main memory.

- **Volatility**: Main memory is volatile, meaning its contents are lost when the power is turned off. Secondary memory is non-volatile, so data stored in secondary memory remains intact even when the power is switched off.

- **Accessibility**: Main memory is directly accessible by the CPU and is used for storing data and instructions actively being processed. Secondary memory is not directly accessible by the CPU and requires data to be transferred to main memory before it can be processed.

- **Cost and Capacity**: Main memory is more expensive per unit of storage and offers limited capacity compared to secondary memory. Secondary memory provides larger storage capacities at a lower cost per unit of storage, making it suitable for long-term storage needs.

In summary, main memory is fast but volatile and limited in capacity, while secondary memory is slower but non-volatile and offers larger storage capacities for long-term data storage.
```
17. Dynamic Binding
```
Static binding happens when the code is compiled, while dynamic bind happens when the code is executed at run time.

Static Binding:
When a compiler acknowledges all the information required to call a function or all the values of the variables during compile time, it is called “static binding”. As all the required information is known before runtime, it increases the program efficiency and it also enhances the speed of execution of a program. Static Binding makes a program very efficient, but it declines the program flexibility, as ‘values of variable’ and ‘function calling’ are predefined in the program. Static binding is implemented in a program at the time of coding. Overloading a function or an operator is the example of compile time polymorphism i.e. static binding.

Dynamic Binding Calling a function or assigning a value to a variable, at run-time is called “Dynamic Binding”. Dynamic binding can be associated with run time ‘polymorphism’ and ‘inheritance’ in OOP. Dynamic binding makes the execution of a program flexible as it can decide what value should be assigned to the variable and which function should be called, at the time of program execution. But as this information is provided at run time it makes the execution slower as compared to static binding.

```
18. SRTF scheduling
```
SRTF Scheduling is a preemptive version of SJF scheduling. In SRTF, the execution of the process can be stopped after a certain amount of time. At the arrival of every process, the short term scheduler schedules the process with the least remaining burst time among the list of available processes and the running process
``` 
19. LRTF schedling
```
This is a preemptive version of Longest Job First (LJF) scheduling algorithm. In this scheduling algorithm, we find the process with the maximum remaining time and then process it. We check for the maximum remaining time after some interval of time(say 1 unit each) to check if another process having more Burst Time arrived up to that time

```
20. Priority Scheduling 
```
Priority Scheduling is a method of scheduling processes that is based on priority. In this algorithm, the scheduler selects the tasks to work as per the priority.

The processes with higher priority should be carried out first, whereas jobs with equal priorities are carried out on a round-robin or FCFS basis. Priority depends upon memory requirements, time requirements, etc.
```
21. Round Robin Scheduling 
```
In Round-robin scheduling, each ready task runs turn by turn only in a cyclic queue for a limited time slice. This algorithm also offers starvation free execution of processes. Widely used preemptive scheduling method in traditional OS. All the jobs get a fair allocation of CPU. Cons include : Finding a correct time quantum is a quite difficult task in this system, Round-robin scheduling doesn’t give special priority to more important tasks.
```
22. Producer Consumer Problem 
```
About Producer-Consumer problem: The Producer-Consumer problem is a classic problem that is used for multi-process synchronisation i.e. synchronisation between more than one processes.

The job of the Producer is to generate the data, put it into the buffer, and again start generating data. While the job of the Consumer is to consume the data from the buffer.

What's the problem here?
The following are the problems that might occur in the Producer-Consumer:

The producer should produce data only when the buffer is not full. If the buffer is full, then the producer shouldn't be allowed to put any data into the buffer.
The consumer should consume data only when the buffer is not empty. If the buffer is empty, then the consumer shouldn't be allowed to take any data from the buffer.
The producer and consumer should not access the buffer at the same time.

We can solve this problem by using semaphores.
```
23. Bankers Algorithm
```
It is a banker algorithm used to avoid deadlock and allocate resources safely to each process in the computer system. The 'S-State' examines all possible tests or activities before deciding whether the allocation should be allowed to each process. It also helps the operating system to successfully share the resources between all the processes. The banker's algorithm is named because it checks whether a person should be sanctioned a loan amount or not to help the bank system safely simulate allocation resources.

```
24. Explain Cache
```
Cache memory is an extremely fast memory type that acts as a buffer between RAM and the CPU. It holds frequently requested data and instructions so that they are immediately available to the CPU when needed.
```
25. Diff between direct mapping and associative mapping 
```
Direct mapping and associative mapping are two different techniques used in cache memory management to map main memory blocks to cache locations. They have distinct approaches and trade-offs in terms of complexity, efficiency, and implementation.

1. **Direct Mapping**:
   - In direct mapping, each block of main memory is mapped to exactly one specific cache location.
   - The mapping is determined by using a modulo function on the address of the main memory block. The result of this function determines the cache location where the block will be stored.
   - Direct mapping is relatively simple to implement and requires less hardware complexity compared to other mapping techniques.
   - However, direct mapping can lead to conflicts because multiple main memory blocks may map to the same cache location (known as cache collisions). When a cache miss occurs due to a conflict, the existing block in the cache must be replaced by the new block, leading to potential performance degradation.

2. **Associative Mapping**:
   - In associative mapping, each block of main memory can be mapped to any cache location, and the mapping is determined dynamically based on the contents of the cache.
   - Unlike direct mapping, associative mapping does not suffer from conflicts because any main memory block can be placed in any cache location.
   - Associative mapping is more flexible and efficient in terms of cache utilization since it can make use of any available cache location for storing a block.
   - However, associative mapping requires more complex hardware, specifically content-addressable memory (CAM) or other associative memory structures, to implement the dynamic mapping function efficiently.
   - The flexibility of associative mapping comes with increased hardware complexity and cost compared to direct mapping.

**Differences**:

- **Mapping Technique**: Direct mapping assigns each main memory block to a specific cache location based on a predetermined function, while associative mapping allows any main memory block to be stored in any cache location.
  
- **Complexity**: Direct mapping is simpler to implement and requires less hardware complexity compared to associative mapping, which involves more sophisticated hardware structures to dynamically determine cache locations.
  
- **Potential for Conflicts**: Direct mapping may suffer from cache conflicts when multiple main memory blocks map to the same cache location, leading to performance degradation. Associative mapping does not have this limitation as any block can be placed in any cache location.

In summary, direct mapping offers simplicity but may lead to cache conflicts, while associative mapping provides more flexibility and efficient cache utilization at the cost of increased hardware complexity.

```
26. Diff between multitasking and multiprocessing 
```
Multitasking and multiprocessing are both techniques used in computer systems to execute multiple tasks or processes concurrently, but they differ in how they achieve this concurrency and utilize system resources.

1. **Multitasking**:
   - Multitasking refers to the ability of an operating system to execute multiple tasks or processes concurrently on a single CPU core.
   - In multitasking, the CPU rapidly switches between executing different tasks or processes, giving the illusion of parallelism.
   - Each task or process is allocated a time slice or quantum during which it is allowed to execute. The operating system scheduler is responsible for managing the allocation of CPU time to different tasks.
   - Multitasking is commonly used in single-core systems where only one CPU core is available for task execution.
   - Examples of multitasking include running multiple applications simultaneously on a personal computer or serving multiple users concurrently on a server.

2. **Multiprocessing**:
   - Multiprocessing involves the simultaneous execution of multiple tasks or processes on multiple CPU cores or processors.
   - In multiprocessing, each CPU core or processor can execute its own set of instructions independently of the others, allowing true parallelism.
   - Multiprocessing systems can range from symmetric multiprocessing (SMP), where multiple identical processors share access to main memory and I/O devices, to asymmetric multiprocessing (AMP), where each processor is assigned specific tasks or responsibilities.
   - Multiprocessing systems can significantly increase computational throughput and performance by allowing multiple tasks to be executed in parallel without having to time-share a single CPU core.
   - Examples of multiprocessing systems include modern desktop computers, servers with multiple CPU sockets, and high-performance computing clusters.

**Differences**:

- **Resource Utilization**:
  - Multitasking utilizes a single CPU core to switch between executing multiple tasks or processes.
  - Multiprocessing utilizes multiple CPU cores or processors to execute multiple tasks or processes simultaneously, allowing true parallelism.

- **Concurrency**:
  - Multitasking achieves concurrency through time-sharing, where each task or process is allocated CPU time in a sequential manner.
  - Multiprocessing achieves concurrency through true parallelism, with each CPU core or processor executing its own set of instructions concurrently with others.

- **Performance**:
  - Multiprocessing systems generally offer better performance and scalability compared to multitasking systems, especially for computationally intensive tasks or workloads that can benefit from parallel execution.

In summary, multitasking allows multiple tasks to share a single CPU core through time-sharing, while multiprocessing utilizes multiple CPU cores or processors for true parallel execution of multiple tasks simultaneously, leading to increased performance and scalability.

```