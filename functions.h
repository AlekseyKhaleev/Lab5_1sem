#pragma once

/* Подключение модулей */
#include "definitions.h"

/* Функция вызова исключения связанного с выделением памяти для передачи в set_new_handler() */
void __cdecl new_error();

/* Функция - счетчик гласных/согласных букв в строке */
void words_counter(int& cnt_vow, int& cnt_cons, char* ptr);

/* Функция для считывания содержимого файла в строку-буфер*/
void FileToBuffer(char* path, char* full_buffer, char* str_buffer);

/* Функция для определения пути к результирующему файлу */
void DefineOutPath(char* path, char* out_path);

/* Функция сборки результатов исполнения программы в буферную строку */
void ResultBufferAssembly(char* result_buffer, const char* logo, char* path, char* file_buffer, \
	int cnt_vowels = 0, int cnt_consonants = 0);

/* Функция для вывода результата исполнения программы в файл */
void PrintBufferToFile(char buf[], char* path);
