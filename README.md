
# Binary Trees Library

This repository contains a library for working with binary trees in C. It provides functions for creating, manipulating, and traversing binary trees, as well as specific implementations for binary search trees (BSTs), AVL trees, and max binary heaps.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Functionality](#functionality)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Binary trees are a fundamental data structure in computer science, used for various applications such as hierarchical data representation, searching, and sorting. This library offers a collection of functions to work with binary trees efficiently.

## Usage

To use this library in your C projects, follow these steps:

1. Clone this repository to your local machine:

    ```bash
    git clone <repository-url>
    ```

2. Include the `binary_trees.h` header file in your source code:

    ```c
    #include "binary_trees.h"
    ```

3. Compile your source code along with the `binary_trees.c` file:

    ```bash
    gcc -o <output-file> <your-source-file.c> binary_trees.c
    ```

4. Link your executable with the `binary_trees` library during compilation if needed.

## Functionality

The library provides the following functionality:

- Creating binary tree nodes
- Inserting nodes into a binary tree
- Deleting nodes from a binary tree
- Traversing binary trees (preorder, inorder, postorder, levelorder)
- Computing properties of binary trees (height, depth, size, leaves, nodes, balance, completeness)
- Rotating binary trees (left and right rotations)
- Working with binary search trees (BSTs)
- Working with AVL trees
- Working with max binary heaps

Refer to the `binary_trees.h` header file for detailed function prototypes and descriptions.

## Contributing

Contributions to this repository are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request with your changes. Make sure to follow the existing coding style and conventions.

