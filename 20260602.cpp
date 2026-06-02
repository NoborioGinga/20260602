// 20260602.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include <iostream>
#include <random>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
	const int spawnCount = 4; // ランダムに生成する敵の数
	int HP_Sum = 0;
	int ATK_Sum = 0;
	int actualCount = 0;

	// 乱数初期化（1 ～ 敵数）
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, EnemyFactory::GetEnemyCount());

	for (int i = 0; i < spawnCount; ++i)
	{
		int id = dist(mt);
		Enemy* enemy = EnemyFactory::CreateEnemy(id);
		if (enemy)
		{
			std::cout << enemy->Data.Name
				<< " EXP:" << enemy->Data.EXP
				<< ", Gold:" << enemy->Data.Gold
				<< ",  CriticalRate:" << enemy->Data.CriticalRate
				<< std::endl;

			HP_Sum += enemy->Data.HP;
			ATK_Sum += enemy->Data.ATK;
			++actualCount;
		}
		else
		{
			std::cout << "Enemy ID " << id << " not found." << std::endl;
		}

		delete enemy;
	}

	if (actualCount > 0)
	{
		double avgATK = static_cast<double>(ATK_Sum) / actualCount;
		std::cout << "HPの合計: " << HP_Sum << std::endl;
		std::cout << "ATKの平均: " << avgATK << std::endl;
	}
	else
	{
		std::cout << "集計対象の敵が存在しません。" << std::endl;
	}

	return 0;
}
