[![Language: C++17](https://img.shields.io/badge/Language-C++17-blue.svg)]()
[![Dependencies: zlib](https://img.shields.io/badge/Dependencies-zlib-orange.svg)]()
[![Build System: CMake](https://img.shields.io/badge/Build-CMake-lightgrey.svg)]()
[![Build: Passing](https://img.shields.io/badge/Build-Passing-brightgreen.svg)]()

# Multithreaded File Compression Tool

## Table of Contents
1. [Description](#description)
2. [Internal Architecture](#internal-architecture)
3. [Directory Structure](#directory-structure)
4. [Features](#features)
5. [Prerequisites](#prerequisites)
6. [How to Build and Run](#how-to-build-and-run)
7. [Usage / Examples](#usage--examples)

## Description
This is a simple multithreaded file compression and decompression tool using the `zlib` library. It divides the file into chunks and processes them in parallel using C++ threads.

## Internal Architecture
The application employs a **Master-Worker Threading Model**:
1. **Chunking (Master Thread):** The input file is read and divided into fixed-size byte blocks (chunks) in memory.
2. **Parallel Processing (Worker Threads):** Using `std::thread` or `std::async`, worker threads are assigned individual chunks. Each thread utilizes `zlib` functions to compress or decompress its assigned chunk independently.
3. **Reassembly:** Thread safety is maintained by using mutexes or futures to collect the processed data. The master thread reorders the chunks to maintain data integrity and writes the final output to the disk.

## Directory Structure
.
├── CMakeLists.txt
├── README.md
├── include/
│   └── Compressor.hpp
└── src/
    ├── Compressor.cpp
    └── main.cpp

## Features
- Compress and decompress any file
- Multithreaded chunk-wise compression
- Fast and efficient processing for large files

## Prerequisites
- C++17 or later
- zlib library
- CMake 3.10+

## How to Build and Run
1. Set up the build directory and compile:
   ```
   mkdir build
   cd build
   cmake ..
   make
   ```

## Usage / Examples
The program requires command-line arguments to specify the operation, input file, output file, and the number of threads.

Compression Syntax:
```
./MultithreadedCompressor compress <input_file> <output_file> <num_threads>
```

Decompression Syntax:
```
./MultithreadedCompressor decompress <input_file> <output_file> <num_threads>
```

Examples:
```
./MultithreadedCompressor compress data.txt data.z 4
./MultithreadedCompressor decompress data.z data_dec.txt 4
```