#pragma once
#include"EnemyData.h"
// 敵クラス
//このクラスは、敵の基本的な属性を持ち、敵の行動や状態を管理します
class Enemy
{
public:
	EnemyData Data;// 敵の基本的な属性を格納する構造体

	// コンストラクタは、EnemyData構造体の参照を受け取り、Dataメンバーに初期化します
	Enemy(const EnemyData& data) 
		: Data(data)  
	{
	}
		
};