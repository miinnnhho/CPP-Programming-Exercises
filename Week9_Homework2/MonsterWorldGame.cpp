#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("조민호", "◎", rand() % w, rand() % h));
	game.add(new Vampire("이명준", "★", rand() % w, rand() % h));
	game.add(new KGhost("이희웅", "♥", rand() % w, rand() % h));
	game.add(new Jiangshi("박민재", "↔", rand() % w, rand() % h, true));
	game.add(new Jiangshi("이희석", "↕", rand() % w, rand() % h, false));
	game.add(new Siangshi("고대현", "SJ", rand() % w, rand() % h, false));
	game.add(new Smombi("정창욱", "//", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------게임 종료-------------------\n");
}