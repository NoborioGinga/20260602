#pragma once
#include"EnemyData.h"

class Enemy;

class EnemyFactory
{
	// 敵のデータを格納する配列
	static const EnemyData EnemyTable[];

	// 敵のデータの数を定義する定数
	static const int EnemyTableSize;

public:
	// 敵のIDを指定して、Enemyクラスのインスタンスを生成する静的メソッド
	static Enemy* CreateEnemy(int ID);
};