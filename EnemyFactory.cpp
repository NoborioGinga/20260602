#include "EnemyFactory.h"
#include "Enemy.h"

const EnemyData EnemyFactory::EnemyTable[] = {
	{ 1, "スライム", 10, 5, 2, 1, 10, 5, Element::None },
	{ 2, "ゴブリン", 20, 10, 5, 2, 20, 10, Element::Earth },
	{ 3, "オーク", 30, 15, 8, 3, 30, 15, Element::Fire },
	{ 4, "ドラゴン", 100, 50, 20, 5, 1000, 1000, Element::Wind}
};

const int EnemyFactory::EnemyTableSize = sizeof(EnemyTable) / sizeof(EnemyData);

Enemy* EnemyFactory::CreateEnemy(int ID)
{
	for (int i = 0; i < EnemyTableSize; ++i)
	{
		if (EnemyTable[i].ID == ID)
		{
			return new Enemy(EnemyTable[i]);
		}
	}
	return nullptr; // IDが見つからない場合はnullptrを返す
}