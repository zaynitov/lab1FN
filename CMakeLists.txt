
add_library(untitled SHARED library.cpp library.h)

cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
# Если версия установленой программы
# старее указаной, произайдёт аварийный выход.

add_executable(library library.cpp)		# Создает исполняемый файл с именем main
# из исходника main.cpp