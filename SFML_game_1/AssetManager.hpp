//
//  AssetManager.hpp
//  SFML_game_1
//
//  Created by LEI_Siqi  on 10/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//

#ifndef AssetManager_hpp
#define AssetManager_hpp

#include <stdio.h>
#include <map>
#include <SFML/Graphics.hpp>

namespace n1 {
    class AssetManager{
    public:
        AssetManager(){}
        ~AssetManager(){}
        
        void loadTexture (std::string name, std::string filename);
        sf::Texture &GetTexture (std::string name);
        
        void loadFont (std::string name, std::string filename);
        sf::Font &GetFont (std::string name);
    private:
        //mapping the texture name and the texture itself
        std::map<std::string, sf::Texture> _textures;
        std::map<std::string, sf::Font> _fonts;
    };
}

#endif /* AssetManager_hpp */
