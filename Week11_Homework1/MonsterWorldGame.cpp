#include "MonsterWorld.h"
#include "VariousMonsters.h"
#include <time.h>

void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;
	MonsterWorld game(w, h);

	game.add(new Zombie("Á¶¹ÎÈ£", "¡İ", rand() % w, rand() % h));
	game.add(new Vampire("ÀÌ¸íÁØ", "¡Ú", rand() % w, rand() % h));
	game.add(new KGhost("ÀÌÇĞ±º", "¢¾", rand() % w, rand() % h));
	game.add(new Jiangshi("¹è½Â¿ì", "¡ê", rand() % w, rand() % h, true));
	game.add(new Jiangshi("±èµ¿¿ì", "¢Õ", rand() % w, rand() % h, false));
	game.add(new Human	("ÀÌÈñ¿õ", "¡Ï", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------°ÔÀÓ Á¾·á-------------------\n");
	getchar();
	getchar();
}