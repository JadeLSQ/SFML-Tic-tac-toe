//
//  Game.hpp
//  SFML game
//
//  Created by LEI_Siqi  on 09/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//  Create a game loop === main

#ifndef Game_hpp
#define Game_hpp

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "AssetManager.cpp"
#include "StateMachine.hpp"
#include "InputManager.hpp"

namespace n1{
    struct GameData{
        StateMachine machine;
        sf::RenderWindow window;
        AssetManager assets;
        InputManager input;
    };
    
    typedef std::shared_ptr<GameData> GameDataRef;
    
    class Game {
        public :
        Game(int width, int height, std ::string title);
        
    private:
        //dt = frame rate = how many time we update per second
        const float dt = 1.0f /60.0f;
        //handle framrate
        sf::Clock _clock;
        GameDataRef _data = std::make_shared<GameData>();
        void Run();
    };
}


#endif /* Game_hpp */
