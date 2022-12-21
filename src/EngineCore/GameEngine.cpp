#include <iostream>
#include "GameEngine.h"

namespace DingusEngine{
    namespace Core {
        class GameEngine
        {
        public:
            // Initialize the game engine
            void init();

            // Run the game loop
            void run();

            // Clean up resources before exiting
            void cleanup();

        private:
            // Update the game state
            void update();

            // Render the game
            void render();
        };

        int main(int argc, char** argv)
        {
            GameEngine engine;
            engine.init();
            engine.run();
            engine.cleanup();

            return 0;
        }

        void GameEngine::init()
        {
            std::cout << "Initializing game engine..." << std::endl;

            // Initialize any necessary resources here (e.g. graphics, audio, etc.)
        }

        void GameEngine::run()
        {
            while (true) // or some other condition to keep the game running
            {
                update();
                render();
            }
        }

        void GameEngine::cleanup()
        {
            std::cout << "Cleaning up resources..." << std::endl;

            // Free any allocated resources here
        }

        void GameEngine::update()
        {
            // Update the game state (e.g. handle input, physics, AI, etc.)
        }

        void GameEngine::render()
        {
            // Render the game (e.g. draw graphics to the screen)
        }
    }
}
