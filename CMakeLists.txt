cmake_minimum_required(VERSION 3.20)
project(SiAOD4)

set(CMAKE_CXX_STANDARD 23)

add_executable(SiAOD4 main.cpp PerfectlyBalancedBinaryTree.h PerfectlyBalancedBinaryTree.cpp PBBTNode.h PBBTNode.cpp exceptions/TreeIsNotInitializedException.h)
