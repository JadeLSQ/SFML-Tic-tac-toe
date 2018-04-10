//
//  main.cpp
//  SFML game
//
//  Created by LEI_Siqi  on 08/04/2018.
//  Copyright © 2018 LEI_Siqi . All rights reserved.
//
#include <iostream>
#include "Game.hpp"
//add definitions to make it more dynamic : use macro like SCREEN_HEIGHT instead of real number
#include "DEFINITIONS.hpp"

int main(){
    //build game loop
    n1::Game (SCREEN_WIDTH,SCREEN_HEIGHT,"Tic-Tac-Toe");
    return EXIT_SUCCESS;
}














/* // We create state machine to replae this kind of code
 #include <SFML/Graphics.hpp>
 #include <iostream>
 
 #define SCREEN_WIDTH 1024
 #define SCREEN_HEIGHT 1024
 
 int main()
 {
 sf::RenderWindow window (sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Tic-tac-toc");
 while (window.isOpen())
 {
 sf::Event event;
 
 while (window.pollEvent(event))
 {
 switch (event.type) {
 case sf::Event::Closed://app closed by the user
 window.close();
 break;
 
 }
 }
 window.clear();
 //objects to draw
 window.display();
 }
 return EXIT_SUCCESS;
 }
 */
