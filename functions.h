#pragma once

/* ����������� ������� */
#include "definitions.h"

/* ������� ������ ���������� ���������� � ���������� ������ ��� �������� � set_new_handler() */
void __cdecl new_error();

/* ������� - ������� �������/��������� ���� � ������ */
void words_counter(int& cnt_vow, int& cnt_cons, char* ptr);

/* ������� ��� ���������� ����������� ����� � ������-�����*/
void FileToBuffer(char* path, char* full_buffer, char* str_buffer);

/* ������� ��� ����������� ���� � ��������������� ����� */
void DefineOutPath(char* path, char* out_path);

/* ������� ������ ����������� ���������� ��������� � �������� ������ */
void ResultBufferAssembly(char* result_buffer, const char* logo, char* path, char* file_buffer, \
	int cnt_vowels = 0, int cnt_consonants = 0);

/* ������� ��� ������ ���������� ���������� ��������� � ���� */
void PrintBufferToFile(char buf[], char* path);
