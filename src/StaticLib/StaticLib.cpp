﻿#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end < begin)return false;

	for (item* p = begin; p != end - 1; p++) //並び替えのための基礎事項
	{
		for(item*q=begin)//さらに順番を変えるための方法


	}
	return true;
}
