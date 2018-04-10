//
//  SplashState.cpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//
#include "SplashState.hpp"


namespace n1{
    SplashState::SplashState(GameDataRef data):_data(data){
    }
    void SplashState::Init(){
        this->_data->assets.loadTexture("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH);
        _background.setTexture(this->_data->assets.GetTexture("Splash State Background"));
        
    }
    
    void SplashState::HandleInput(){
        sf::Event event;
        while (this-> _data ->window.pollEvent(event)){
            if(sf::Event::Closed == event.type){
                this ->_data ->window.close();
            }
        }
        
    }
    void SplashState::Update(float dt){
        if (this -> _clock.getElapsedTime().asSeconds()>SPLASH_STATE_SHOW_TIME){
            //Switch to the Main menu
            std::cout << "Go to main Menu "<< std::endl;
        }
    }
    void SplashState::Draw (float dt){
        this-> _data->window.clear(sf::Color::Red);
        this-> _data->window.draw(this-> _background);
        this-> _data->window.display();
    }
    
    
    
}
