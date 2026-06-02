#pragma once
#include "Element.h"

struct EnemyData
{
	/// <summary>
	/// ID を格納する整数型の変数。
	/// </summary>
	int ID;

	/// <summary>
	/// 敵の名前
	/// </summary>
	const char Name[256];

	/// <summary>
	/// ヒットポイント (HP) を表す int 型の変数の宣言です。
	/// </summary>
	int HP;

	/// <summary>
	/// 敵の攻撃力を表す int 型の変数の宣言です。
	/// </summary>
	int ATK;

	/// <summary>
	/// 敵の防御力を表す int 型の変数の宣言です。
	/// </summary>
	int DEF;

	/// <summary>
	/// 敵のスピードを表す  int 型で整数値を格納します。
	/// </summary>
	int SPD;

	/// <summary>
	/// 敵が倒されたときにプレイヤーが獲得するゴールドの量を表す int 型の変数の宣言です。
	/// </summary>
	int Gold;

	/// <summary>
	/// 整数型の変数 EXP を宣言します。
	/// </summary>
	int EXP;

	Element Element;



};

