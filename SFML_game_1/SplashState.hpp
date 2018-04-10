//
//  SplashState.hpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//  Create initialized state for the app

#ifndef SplashState_hpp
#define SplashState_hpp

#include <SFML/Graphics.hpp>
#include "state.hpp"
#include "Game.hpp"
#include <sstream>
#include <iostream>
#include "DEFINITIONS.hpp"
namespace n1{
    //SplashState is a child of State
    class SplashState : public State{
    public:
        SplashState(GameDataRef data);
        void Init();
        void HandleInput();
        void Update(float dt);
        void Draw (float dt);
    private:
        GameDataRef _data;
        //track how long the application is gonna be running for
        sf::Clock _clock;
        sf::Sprite _background;
    };
}
#endif /* SplashState_hpp */
