//
//  InputManager.cpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//  InputManager can handle feature to be able to handle input (here we put sprite as an input)

#include "InputManager.hpp"

namespace n1 {
    bool InputManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window){
        if(sf::Mouse::isButtonPressed(button)){
            // temporary rect
            sf::IntRect tempRect (object.getPosition().x,
                                  object.getPosition().y,
                                  object.getGlobalBounds().width,
                                  object.getGlobalBounds().height);
            
            if (tempRect.contains(sf::Mouse::getPosition(window))){
                return true;
            }
        }
        //or the sprite is not clicked
        return false;
    }
    sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow &window ){
        return sf::Mouse::getPosition(window);
    }
}

