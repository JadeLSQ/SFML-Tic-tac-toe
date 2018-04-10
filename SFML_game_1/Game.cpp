//
//  Game.cpp
//  SFML game
//
//  Created by LEI_Siqi  on 09/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//  This is like the main

#include "Game.hpp"
#include "SplashState.hpp"

namespace n1{
    Game::Game(int width, int height, std ::string title){
        _data->window.create(sf::VideoMode(width,height), title,sf::Style::Close|sf::Style::Titlebar);
        
        //Should add the initial state otherwise errors
        _data->machine.AddState(StateRef(new SplashState(this->_data)));
        
        this->Run();
    }
    
    void Game::Run(){
        float newTime, frameTime, interpolation;
        float currentTime = this->_clock.getElapsedTime().asSeconds();
        float accumulator = 0.0f;
        while (this->_data->window.isOpen()){
            this->_data->machine.ProcessStateChanges();
            newTime = this->_clock.getElapsedTime().asSeconds();
            //how long it takes between frames
            frameTime = newTime - currentTime;
            //We restrict the frameTime so it won't go too high
            if (frameTime > 0.25f){
                frameTime = 0.25f;
            }
            currentTime = newTime;
            accumulator += frameTime;
            while (accumulator >= dt){
                this ->_data ->machine.GetActiveState()->HandleInput();
                this ->_data ->machine.GetActiveState()->Update(dt);
                accumulator -= dt;
            }
            interpolation = accumulator /dt;
            this->_data->machine.GetActiveState()->Draw(interpolation);
            
        }
    }
}
