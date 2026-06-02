// 20260602.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
	Enemy* enemy = EnemyFactory::CreateEnemy(1);

	printf("%s EXP:%d, Gold:%d\n", enemy->Name, enemy->EXP, enemy->Gold);

	delete enemy;

	return 0;
}
