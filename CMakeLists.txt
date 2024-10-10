cmake_minimum_required(VERSION 3.27)
project(C_Data_Structures_And_Algorithmes C)

set(CMAKE_C_STANDARD 23)

add_executable(C_Data_Structures_And_Algorithmes
        "LinkedList/SingleLL.c"
        "LinkedList/Points_de_lespace.c"
        LinkedList/Gestion_de_Stock.c
        "TD 2/PointInSpace.c")
