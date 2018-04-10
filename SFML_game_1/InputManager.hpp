//
//  InputManager.hpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//

#ifndef InputManager_hpp
#define InputManager_hpp
#include <SFML/Graphics.hpp>

namespace n1{
    class InputManager{
    public:
        InputManager(){}
        ~InputManager(){}
        
        bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
        sf::Vector2i GetMousePosition(sf::RenderWindow &window );
    };
}

#endif /* InputManager_hpp */
