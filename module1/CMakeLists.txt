cmake_minimum_required(VERSION 3.2)

aux_source_directory(. DIR_LIB_SRCS)

add_library(LodePng SHARED ${DIR_LIB_SRCS})

set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)