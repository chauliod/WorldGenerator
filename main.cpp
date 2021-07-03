#include "game.h"
#include "view.h"
#include <QApplication>

/* В этой игре главному герою вверено управлять генератором миров.
 * Игрок может создавать и исследовать миры.
 * Причины оказания такой чести не ясны, как и происхождение как героя, так и генератора.
 * Миры весьма разнообразны, от привычных землеподобных до откровенно абстрактных и фантасмагорийных.
 * Основной геймплей: собирай ресурсы, дерись с людьми и животными, присоединяй их в свою команду, захватывай рабов,
 * строй дома, засевай поля; так же предполагается развитие генератора - чтобы можно было запоминать миры, сражаться с
 * высокоразвитыми цивилизациями, создавать уникальные ресурсы и пр. */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game game;
    View view(nullptr, &game);
    view.show();

    return a.exec();
}