#include "EnemyFactory.h"
#include "Enemy.h"

const EnemyData EnemyFactory::EnemyTable[] = {
	{ 1, "スライム", 10, 5, 2, 1, 5, 1, Element::None },
	{ 2, "ゴブリン", 20, 10, 5, 2, 10, 2, Element::Earth },
	{ 3, "オーク", 30, 15, 10, 3, 15, 3, Element::Fire },
	{ 4, "ドラゴン", 100, 50, 30, 5, 1000, 50, Element::Wind}
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