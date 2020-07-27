cmake_minimum_required(VERSION 3.16)
project(Chapter_17 C)

set(CMAKE_C_STANDARD 11)

add_executable(Chapter_17
		cross-reference/cross_ref.c
		cross-reference/output.c
		cross-reference/test.c
		linked_list/doublelinked.c
		linked_list/find.c
		linked_list/linkedlist.c
		trees/trees.c)
