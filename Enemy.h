#pragma once
#include"EnemyData.h"
// “GƒNƒ‰ƒX
//‚±‚ÌƒNƒ‰ƒX‚ÍA“G‚ÌŠî–{“I‚È‘®«‚ğ‚¿A“G‚Ìs“®‚âó‘Ô‚ğŠÇ—‚µ‚Ü‚·
class Enemy
{
	public:
		int ID; // “G‚Ì¯•Êq
		const char* Name; // “G‚Ì–¼‘O
		int HP; // “G‚Ì‘Ì—Í
		int ATK; // “G‚ÌUŒ‚—Í
		int DEF; // “G‚Ì–hŒä—Í
		int SPD; // “G‚Ì‘f‘‚³
		int Gold; // “G‚ª—‚Æ‚·ƒS[ƒ‹ƒh
		int EXP; // “G‚ª—‚Æ‚·ŒoŒ±’l
		Element Element; // “G‚Ì‘®«


		// ƒRƒ“ƒXƒgƒ‰ƒNƒ^
		Enemy(const EnemyData& data)
			: ID(data.ID),
			Name(data.Name), 
			HP(data.HP), 
			ATK(data.ATK), 
			DEF(data.DEF), 
			SPD(data.SPD), 
			Gold(data.Gold), 
			EXP(data.EXP), 
			Element(data.Element)
		{
		}

};