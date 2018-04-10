//
//  AssetManager.cpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
// Asset manager allows to load font and texture only once

#include "AssetManager.hpp"

#include "AssetManager.hpp"


namespace n1{
    void AssetManager::loadTexture(std::string name, std::string fileName){
        sf::Texture tex;
        
        if (tex.loadFromFile(fileName ) ){
            this->_textures[name] = tex;
        }
    }
    sf::Texture &AssetManager::GetTexture(std::string name){
        //Return a particular texture at this particular index which is referenced by "name"
        return this-> _textures.at(name);
    }
    
    void AssetManager::loadFont(std::string name, std::string fileName){
        sf::Font font;
        
        if (font.loadFromFile(fileName ) ){
            this->_fonts[name] = font;
        }
    }
    sf::Font &AssetManager::GetFont(std::string name){
        //Return a particular texture at this particular index which is referenced by "name"
        return this-> _fonts.at(name);
    }
}
