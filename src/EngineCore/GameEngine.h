#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

namespace DingusEngine{
    namespace Core {
        class GameEngine
        {
        public:
            void init();
            void run();
            void cleanup();

        private:
            void update();
            void render();
        };
    }
}

#endif
